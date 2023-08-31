#pragma once
#include <cstdlib>
#include <stdexcept>

template <typename Type>
class DynamicArray 
{
public:
	DynamicArray();
	DynamicArray(std::size_t size);
	DynamicArray(const DynamicArray& other);
	~DynamicArray();

	DynamicArray& operator=(const DynamicArray& other);
	Type& operator[](std::size_t index);

	void setSize(std::size_t new_size);
	std::size_t getSize() const;
	void clear();
	void push_back(Type element);

	void reserve(std::size_t reservedSpace);
	std::size_t getCapacity() const;
	void shrinkToFit();
	void pop_back();
	Type back() const;
	bool operator==(const DynamicArray& other) const;

private:
	Type* data = nullptr;
	std::size_t size = 0;
	std::size_t capacity = 0;

private:
	void copyFrom(const DynamicArray& other);
};


template <typename Type>
DynamicArray<Type>::DynamicArray()
	: data(nullptr), size(0), capacity(0) {}


template <typename Type>
DynamicArray<Type>::DynamicArray(std::size_t size)
	: size(size), capacity(size) 
{
	data = new Type[size];
}


template <typename Type>
DynamicArray<Type>::DynamicArray(const DynamicArray<Type>& other) 
{
	copyFrom(other);
}


template <typename Type>
DynamicArray<Type>::~DynamicArray() 
{
	delete[] data;
}


template <typename Type>
DynamicArray<Type>& DynamicArray<Type>::operator=(const DynamicArray<Type>& other) 
{
	if (this != &other) 
	{
		delete[] data;
		copyFrom(other);
	}
	return *this;
}


template <typename Type>
Type& DynamicArray<Type>::operator[](std::size_t index) 
{
	return data[index];
}


template <typename Type>
void DynamicArray<Type>::setSize(std::size_t new_size) 
{
	if (new_size > capacity) 
	{
		reserve(new_size);
	}
	size = new_size;
}


template <typename Type>
std::size_t DynamicArray<Type>::getSize() const 
{
	return size;
}


template <typename Type>
void DynamicArray<Type>::clear() 
{
	delete[] data;
	data = nullptr;
	size = 0;
	capacity = 0;
}


template <typename Type>
void DynamicArray<Type>::push_back(Type element) 
{
	if (size == capacity) 
	{
		reserve(size == 0 ? 1 : size * 2);
	}
	data[size] = element;
	size++;
}


template <typename Type>
void DynamicArray<Type>::copyFrom(const DynamicArray<Type>& other) 
{
	size = other.size;
	capacity = other.capacity;
	data = new Type[capacity];

	for (std::size_t i = 0; i < size; i++) 
	{
		data[i] = other.data[i];
	}
}


template <typename Type>
void DynamicArray<Type>::reserve(std::size_t reservedSpace) 
{
	if (reservedSpace > capacity) 
	{
		Type* new_data = new Type[reservedSpace];
		for (std::size_t i = 0; i < size; i++) 
		{
			new_data[i] = data[i];
		}
		delete[] data;
		data = new_data;
		capacity = reservedSpace;
	}
}


template <typename Type>
std::size_t DynamicArray<Type>::getCapacity() const 
{
	return capacity;
}


template <typename Type>
void DynamicArray<Type>::shrinkToFit() 
{
	if (size < capacity) 
	{
		Type* new_data = new Type[size];
		for (std::size_t i = 0; i < size; i++) 
		{
			new_data[i] = data[i];
		}
		delete[] data;
		data = new_data;
		capacity = size;
	}
}


template <typename Type>
void DynamicArray<Type>::pop_back() 
{
	if (size > 0) 
	{
		size--;
	}
}


template <typename Type>
Type DynamicArray<Type>::back() const 
{
	if (size > 0) {
		return data[size - 1];
	}
	else 
	{
		throw std::runtime_error("Array is empty");
	}
}


template <typename Type>
bool DynamicArray<Type>::operator==(const DynamicArray<Type>& other) const 
{
	if (size != other.size) 
	{
		return false;
	}
	for (std::size_t i = 0; i < size; i++) 
	{
		if (data[i] != other.data[i]) 
		{
			return false;
		}
	}
	return true;
}