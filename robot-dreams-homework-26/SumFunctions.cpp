#include <numeric>
#include <iomanip>
#include <chrono>
#include <iostream>
#include <thread>

#include "SumFunctions.h"

int sumSingleThread(const std::vector<int>& vector)
{
    int sum = 0;
    for (int element : vector) 
    {
        sum += element;
    }
    return sum;
}


int sumMultiThread2(const std::vector<int>& vector) 
{
    size_t size = vector.size();
    size_t half = size / 2;

    auto first_half = std::begin(vector);
    auto second_half = first_half + half;

    int sum_first = 0;
    int sum_second = 0;

    std::thread thread1([&sum_first, first_half, half]() 
        {
        sum_first = std::accumulate(first_half, first_half + half, 0);
        });

    std::thread thread2([&sum_second, second_half, half]() 
        {
        sum_second = std::accumulate(second_half, second_half + half, 0);
        });

    thread1.join();
    thread2.join();

    return sum_first + sum_second;
}


int sumMultiThreadHardware(const std::vector<int>& vector) 
{
    size_t size = vector.size();
    size_t num_threads = std::thread::hardware_concurrency();
    size_t chunk_size = size / num_threads;

    std::vector<std::thread> threads(num_threads);
    std::vector<int> partial_sums(num_threads);

    auto thread_func = [&](size_t thread_idx) 
        {
        auto start = std::begin(vector) + thread_idx * chunk_size;
        auto end = start + chunk_size;
        partial_sums[thread_idx] = std::accumulate(start, end, 0);
        };

    for (size_t i = 0; i < num_threads; i++) 
    {
        threads[i] = std::thread(thread_func, i);
    }

    for (size_t i = 0; i < num_threads; i++) 
    {
        threads[i].join();
    }

    return std::accumulate(std::begin(partial_sums), std::end(partial_sums), 0);
}


int sumMultiThreadDoubleHardware(const std::vector<int>& vector, double time, double boost) 
{
    size_t size = vector.size();
    size_t num_threads = 2 * std::thread::hardware_concurrency();
    size_t chunk_size = size / num_threads;

    std::vector<std::thread> threads(num_threads);
    std::vector<int> partial_sums(num_threads);

    auto thread_func = [&](size_t thread_idx) 
        {
        auto start = std::begin(vector) + thread_idx * chunk_size;
        auto end = start + chunk_size;
        partial_sums[thread_idx] = std::accumulate(start, end, 0);
        };

    for (size_t i = 0; i < num_threads; i++) 
    {
        threads[i] = std::thread(thread_func, i);
    }

    for (size_t i = 0; i < num_threads; i++) 
    {
        threads[i].join();
    }

    int total_sum = std::accumulate(std::begin(partial_sums), std::end(partial_sums), 0);
    double expected_time = time / boost;

    return static_cast<int>(total_sum * (expected_time / time));
}


std::vector<int> generateVector(size_t size) 
{
    std::vector<int> vec(size);
    for (size_t i = 0; i < size; i++) 
    {
        vec[i] = i;
    }
    return vec;
}


void runTests()
{
    std::vector<size_t> sizes = { 10000, 100000, 1000000, 10000000, 100000000 };
    std::vector<size_t> num_threads = { 1, 2, std::thread::hardware_concurrency(), 2 * std::thread::hardware_concurrency() };

    double time_single = 0.0;
    double time_multi_hardware = 0.0;

    std::vector<int> vec = generateVector(sizes[0]);
    auto start_time = std::chrono::high_resolution_clock::now();
    int result_single = sumSingleThread(vec);
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end_time - start_time;
    time_single = elapsed_time.count();

    for (size_t num_thread : num_threads)
    {
        std::string thread_label;
        if (num_thread == 1)
        {
            thread_label = "Threads: 1";
        }
        else if (num_thread == 2)
        {
            thread_label = "Threads: 2";
        }
        else if (num_thread == std::thread::hardware_concurrency())
        {
            thread_label = "Threads: hardware_concurrency()";
        }
        else if (num_thread == 2 * std::thread::hardware_concurrency())
        {
            thread_label = "Threads: hardware_concurrency() * 2";
        }

        std::cout << thread_label << std::endl;
        std::cout << std::setw(10) << "Size" << std::setw(20) << "Time" << std::setw(20) << "Boost" << std::endl;

        for (size_t size : sizes)
        {
            vec = generateVector(size);

            start_time = std::chrono::high_resolution_clock::now();
            int result_multi = 0;

            if (num_thread == 1)
            {
                result_multi = sumSingleThread(vec);
            }
            else if (num_thread == 2)
            {
                result_multi = sumMultiThread2(vec);
            }
            else if (num_thread == std::thread::hardware_concurrency())
            {
                result_multi = sumMultiThreadHardware(vec);
            }
            else if (num_thread == 2 * std::thread::hardware_concurrency())
            {
                result_multi = sumMultiThreadDoubleHardware(vec, time_single, time_multi_hardware);
            }

            end_time = std::chrono::high_resolution_clock::now();
            elapsed_time = end_time - start_time;

            volatile double time = elapsed_time.count();

            double boost = static_cast<double>(result_single) / static_cast<double>(result_multi);

            std::cout << std::setw(10) << size << std::setw(20) << time << std::setw(20) << boost << std::endl;
        }
    }
}