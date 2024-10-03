#pragma once

#include <iostream>

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

template <typename T, typename F> void iter(T *array , int  lenght, F function)
{
    for (int i = 0; i < lenght; i++)
        function(array[i]);
}
