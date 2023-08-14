#pragma once
#include <cstdlib>

class DynamicIntArray {

public:

    DynamicIntArray();
    DynamicIntArray(std::size_t size);
    DynamicIntArray(const DynamicIntArray& other);
    ~DynamicIntArray();

public:

    DynamicIntArray& operator=(const DynamicIntArray& other);
    int& operator[](std::size_t index);

public:

    void setSize(std::size_t new_size);
    std::size_t getSize() const;
    void clear();
    void push_back(int element);

private:

    int* data = 0;
    std::size_t size;

private:

    void copyFrom(const DynamicIntArray& other);
};