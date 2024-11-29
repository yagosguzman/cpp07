#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _len(0)
{}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_data = new T[n];
	_len = n;
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	if (this != copy)
	{
		_data = new T[copy._len];
		_len = copy._len
		for (unsigned int i = 0; i < _len; i++)
			_data[i] = copy._data[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
	if (this == &src) // Self-assignation protection
		return *this;
	if (_data)
		delete[] _data;
	_data = new T[src._len];
	_len = src._len;
	for (unsigned int i = 0; i < _len; i++)
		_data[i] = src._data[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _len)
		throw OutOfRange();
	return _data[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _len;
}

template <typename T>
const char* Array<T>::OutOfRange::what(void) const throw()
{
	return ("The index array is out of bounds");
}

#endif