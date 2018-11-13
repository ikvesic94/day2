#include "array.h"
#include <stdexcept>

array::array() 
{
	this ->p = nullptr;
	this ->n = 0;
}

array::array(const array& other) 
{
	alloc_array(other.size());
	for (int i = 0; i < this->n; ++i) 
	{
		p[i] = other.at(i);
	}
}

array::array(const int size, const double value):array()
{
	alloc_array(size);
	for (int i = 0; i < size; i++)
	{
		p[i] = value;
	}

}

array::~array() 
{
	if (this->p != nullptr) 
	{
		delete[] this->p; this->p = nullptr;
	}
	this->n = 0;
}

void array::alloc_array(const int size) 
{
	this->p = new double[size];
	if (this->p == nullptr)
	{
		throw;
	}

	this->n = size;
}

int array::size() const
{
	return this->n;
}

double array::at(const int i) const
{
	if (! (i >= 0 && i < n)) 
	{
		throw std::out_of_range("Value of array out of range");
	}
	return p[i];
}

bool array::operator== (const array& other) const
{
	if (this->size() != other.size()) 
	{
		return 0;
	}

	for (int i = 0; i < size(); i++)
	{
		if (at(i) != other.at(i))
			return 0;
	}

	return 1;

}

const array array::operator= (const array& other) 
{
	alloc_array(other.size());
	for (int i = 0; i < this->n; i++)
	{
		p[i] = other.at(i);
	}
	return (*this);
}