#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T* _data;
		unsigned int _len;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		~Array();

		Array& operator=(const Array& src);
		T& operator[](unsigned int i);

		unsigned int size() const;

		class OutOfRange : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
};

#include "Array.tpp" // We include the .tpp file after the declaration of the class to avoid problems compiling

#endif