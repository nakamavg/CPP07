#pragma once

#include <stdexcept> // Para std::out_of_range
#include <cstddef>   // Para std::size_t

template <typename T>
class Array {

private:
	std::size_t count;
	T* m_data;

public:

Array(): m_data(NULL), count(0) {}

Array( unsigned int n )
			: count (n), m_data (NULL) {
			std::cout << "one-arg constructor called\n";
			this->m_data = new T[n];
			for (std::size_t i = 0; i < n; i++)
				m_data[i] = 0;
		}

Array(const Array& other): m_data(new T[other.count]), count(other.count) {
	for (std::size_t i = 0; i < count; i++) {
		m_data[i] = other.m_data[i];
	}
}

~Array() {
	delete[] m_data;
}

Array<T>& operator=(const Array<T>& other) {
	if (this != &other) {
		delete[] m_data;
		m_data = new T[other.count];
		count = other.count;
		for (std::size_t i = 0; i < count; i++) {
			m_data[i] = other.m_data[i];
		}
	}
	return *this;
}
T& operator[](std::size_t index) {
	if (index >= count) {
		throw std::out_of_range("Index out of range");
	}
	return m_data[index];
}
std::size_t size() const {
	return count;
}
};