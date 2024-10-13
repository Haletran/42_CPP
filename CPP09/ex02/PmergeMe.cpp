#include "PmergeMe.hpp"
#include <cctype>
#include <stdexcept>
#include <sstream>
#include <cstdlib>

Sorting::Sorting(char **argv, int size)
{
    //parsing to do
    for (int j = 1; j < size; j++)
    {
        std::string value = argv[j];
        std::stringstream ss(value);
        double num;
        while(ss >> num)
        {
            int num2 = static_cast<int>(num);
            _vectorStack.push_back(num2);
            _dequeStack.push_back(num2);
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
    if (_vectorStack.size() > 5)
        iterator = 5;
    else
        iterator = (int)_vectorStack.size();
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
        iterator = (int)_dequeStack.size();
    for (int i = 0; i < iterator; i++)
        std::cout << _dequeStack[i] << " ";
    if (iterator == 5)
        std::cout << "[...] (" << _dequeStack.size() - 5 << " more)";
    std::cout << std::endl;
}
