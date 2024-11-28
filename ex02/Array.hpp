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
		Array& operator=(const Array& src);
		T& operator[](unsigned int i);
		~Array();

		unsigned int size() const;

		class OutOfRange : public std::exception
		{
			public:
				virtual const char* what() const throw();
		}
};

#endif