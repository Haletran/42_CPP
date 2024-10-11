#include "PmergeMe.hpp"
#include <cctype>
#include <stdexcept>
#include <cstdlib>


Sorting::Sorting(char **argv, int size)
{
    for (int j = 1; j < size; j++)
    {
        std::string value = argv[j];
        for (int i = 0; value[i]; i++)
        {
            if (value[i] != 32 && !std::isdigit(value[i]))
                throw std::runtime_error("Not a valid input");
            if (std::isdigit(value[i]))
            {
                int num = static_cast<int>(std::strtod(&value[i], NULL));
                _vectorStack.push_back(num);
                _dequeStack.push_back(num);
            }
        }
    }
}

Sorting::~Sorting() {}

void Sorting::get_vectorStack()
{
    int  iterator;
    if (_vectorStack.empty())
        throw std::runtime_error("Vector stack is empty");
    std::cout << "Before (vector) : ";
    if (_vectorStack.size())
        iterator = 5;
    else
        iterator = _vectorStack.size();
    for (int i = 0; i < iterator; i++)
        std::cout << _vectorStack[i] << " ";
    if (iterator == 5)
        std::cout << "[...] (" << _vectorStack.size() - 5 << " more)";
    std::cout << std::endl;
}

void Sorting::get_dequeStack()
{
    int iterator;
    if (_dequeStack.empty())
        throw std::runtime_error("Deque stack is empty");
    std::cout << "Before (deque) : ";
    if (_dequeStack.size() > 5)
        iterator = 5;
    else
        iterator = _dequeStack.size();
    for (int i = 0; i < iterator; i++)
        std::cout << _dequeStack[i] << " ";
    if (iterator == 5)
        std::cout << "[...] (" << _dequeStack.size() - 5 << " more)";
    std::cout << std::endl;
}
