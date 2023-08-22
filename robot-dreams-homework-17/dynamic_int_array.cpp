#include "dynamic_int_array.h"

DynamicIntArray::DynamicIntArray() 
    : data(nullptr), size(0) {}

DynamicIntArray::DynamicIntArray(std::size_t size) 
    : size(size) {
    data = new int[size];
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& other) {
    copyFrom(other);
}

DynamicIntArray::~DynamicIntArray() {
    delete[] data;
}

DynamicIntArray& DynamicIntArray::operator=(const DynamicIntArray& other) {
    if (this != &other) 
    {
        delete[] data;
        copyFrom(other);
    }
    return *this;
}

int& DynamicIntArray::operator[](std::size_t index) {
    return data[index];
}

void DynamicIntArray::setSize(std::size_t new_size) {
    int* new_data = new int[new_size];
    std::size_t copySize = new_size < size ? new_size : size;
    
    for (std::size_t i = 0; i < copySize; ++i) 
    {
        new_data[i] = data[i];
    }

    delete[] data;
    data = new_data;
    size = new_size;
}

std::size_t DynamicIntArray::getSize() const {
    return size;
}

void DynamicIntArray::clear() {
    delete[] data;
    data = nullptr;
    size = 0;
}

void DynamicIntArray::push_back(int element) {
    setSize(size + 1);
    data[size - 1] = element;
}

void DynamicIntArray::copyFrom(const DynamicIntArray& other) {
    size = other.size;
    data = new int[size];

    for (std::size_t i = 0; i < size; ++i) 
    {
        data[i] = other.data[i];
    }
}