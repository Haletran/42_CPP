#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

#include "easyfind.tpp"

template <typename T>
bool easyfind(T & temp, int raw);
