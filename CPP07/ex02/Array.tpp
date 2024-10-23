#include "Array.hpp"

template<typename t>
Array<t>::Array()
{
    this->_array = new t[0]();
    this->_size = 0;
}

template<typename t>
Array<t>::Array(unsigned int n)
{
    this->_array = new t[n]();
    this->_size = n;
}

template<typename t>
Array<t>::~Array()
{
    delete[] _array;
}


template<typename t>
Array<t>::Array(Array const &cpy)
{
    this->_array = NULL;
    *this = cpy;
}

template<typename t>
Array<t> &Array<t>::operator=(const Array& src)
{
    if (this != &src)
    {
        delete [] _array;
        this->_size = src._size;
        this->_array = new t[_size]();
        for (unsigned int i = 0; i < _size; i++)
            this->_array[i] = src._array[i];
    }
    return (*this);
}


template<typename t>
t& Array<t>::operator[](int index)
{
    if (index < 0)
        throw std::runtime_error("Index is out of range");
    if (index >= (int)this->_size)
        throw std::runtime_error("Index is out of range");
    return(_array[index]);
}


template<typename t>
unsigned int Array<t>::size() const
{
    return (this->_size);
}
