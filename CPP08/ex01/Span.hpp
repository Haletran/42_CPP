#pragma once

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>

class  Span{
    public:
        // COPLIAN
        Span(const unsigned int &array_size);
        ~Span();
        Span(const Span &cpy);
        Span operator=(const Span &src);

        void addNumber(const unsigned int &to_add);
        void generateStock(std::vector<int> test);
        int shortestSpan();
        int longestSpan();

        void getStock();
        unsigned int getN();
    private:
        unsigned int N;
        std::vector<unsigned int> _stock;
};
