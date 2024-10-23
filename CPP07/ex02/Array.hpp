#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename t>
class Array{
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array (const Array<t>& cpy);
        Array &operator=(const Array<t>& src);
        t& operator[](int index);
        unsigned int size() const;
    private:
        unsigned int _size;
        t  *_array;
};

#include "Array.tpp"
