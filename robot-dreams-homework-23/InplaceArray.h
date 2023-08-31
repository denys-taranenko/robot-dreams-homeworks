#pragma once
#include <cstdlib>
#include <stdexcept>

template <typename Type, std::size_t Capacity>
class InplaceArray 
{
public:
    InplaceArray();
    ~InplaceArray();

    InplaceArray(const InplaceArray& other);
    InplaceArray& operator=(const InplaceArray& other);

    Type& operator[](std::size_t index);
    const Type& operator[](std::size_t index) const;

    void push_back(const Type& value);
    void pop_back();

    std::size_t size() const;
    std::size_t capacity() const;
    bool empty() const;
    void clear();
    Type back() const;
    bool operator==(const InplaceArray& other) const;

private:
    Type data[Capacity];
    std::size_t m_size;
};


template <typename Type, std::size_t Capacity>
InplaceArray<Type, Capacity>::InplaceArray() : m_size(0) {}


template <typename Type, std::size_t Capacity>
InplaceArray<Type, Capacity>::~InplaceArray() {}


template <typename Type, std::size_t Capacity>
InplaceArray<Type, Capacity>::InplaceArray(const InplaceArray& other) : m_size(other.m_size) 
{
    for (std::size_t i = 0; i < m_size; i++) 
    {
        data[i] = other.data[i];
    }
}


template <typename Type, std::size_t Capacity>
InplaceArray<Type, Capacity>& InplaceArray<Type, Capacity>::operator=(const InplaceArray& other) 
{
    if (this != &other) 
    {
        m_size = other.m_size;
        for (std::size_t i = 0; i < m_size; i++) 
        {
            data[i] = other.data[i];
        }
    }
    return *this;
}


template <typename Type, std::size_t Capacity>
Type& InplaceArray<Type, Capacity>::operator[](std::size_t index) 
{
    if (index >= m_size) 
    {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}


template <typename Type, std::size_t Capacity>
const Type& InplaceArray<Type, Capacity>::operator[](std::size_t index) const 
{
    if (index >= m_size) 
    {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}


template <typename Type, std::size_t Capacity>
void InplaceArray<Type, Capacity>::push_back(const Type& value) 
{
    if (m_size < Capacity) 
    {
        data[m_size] = value;
        m_size++;
    }
    else 
    {
        throw std::out_of_range("Array is full");
    }
}


template <typename Type, std::size_t Capacity>
void InplaceArray<Type, Capacity>::pop_back() 
{
    if (m_size > 0) 
    {
        m_size--;
    }
}


template <typename Type, std::size_t Capacity>
std::size_t InplaceArray<Type, Capacity>::size() const 
{
    return m_size;
}


template <typename Type, std::size_t Capacity>
std::size_t InplaceArray<Type, Capacity>::capacity() const 
{
    return Capacity;
}


template <typename Type, std::size_t Capacity>
bool InplaceArray<Type, Capacity>::empty() const 
{
    return m_size == 0;
}


template <typename Type, std::size_t Capacity>
void InplaceArray<Type, Capacity>::clear() 
{
    m_size = 0;
}


template <typename Type, std::size_t Capacity>
Type InplaceArray<Type, Capacity>::back() const 
{
    if (m_size > 0) 
    {
        return data[m_size - 1];
    }
    else 
    {
        throw std::runtime_error("Array is empty");
    }
}


template <typename Type, std::size_t Capacity>
bool InplaceArray<Type, Capacity>::operator==(const InplaceArray& other) const 
{
    if (m_size != other.m_size) 
    {
        return false;
    }
    for (std::size_t i = 0; i < m_size; i++) 
    {
        if (data[i] != other.data[i]) 
        {
            return false;
        }
    }
    return true;
}