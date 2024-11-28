#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T arr[], int len, void (*f)(T& x))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print_content(T& x)
{
	std::cout << x << std::endl;
}

template <typename T>
void add_42(T& x)
{
	x += 42;
}

#endif