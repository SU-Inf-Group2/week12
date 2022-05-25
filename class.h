#pragma once
#include <iostream>

template <class T>
class UnsignedNumber
{
	T value;
public:
	UnsignedNumber() : value(0) {}
	UnsignedNumber(const T value);

	void assign(const T value)
	{
		if(value >= 0)
		{
			this->value = value;
		}
		else
			this->value = 0;
	}

	void print() const
	{
		std::cout << value << " with size " << sizeof(T) << std::endl;  
	}
};

template <class T>
UnsignedNumber<T>::UnsignedNumber(const T value)
{
	assign(value);
}
