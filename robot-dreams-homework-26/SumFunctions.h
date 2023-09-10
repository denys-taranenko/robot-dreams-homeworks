#pragma once

#include <vector>

int sumSingleThread(const std::vector<int>& vector);
int sumMultiThread2(const std::vector<int>& vector);
int sumMultiThreadHardware(const std::vector<int>& vector);
int sumMultiThreadDoubleHardware(const std::vector<int>& vector, double time, double boost);

std::vector<int> generateVector(size_t size);

void runTests();