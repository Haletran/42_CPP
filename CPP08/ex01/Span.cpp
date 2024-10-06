#include "Span.hpp"


Span::Span(const unsigned int &array_size): N(array_size) {}

Span::~Span() {}

Span::Span(const Span &cpy) {*this = cpy;}

Span Span::operator=(const Span &src)
{
    if (this != &src)
        this->N = src.N;
    return (*this);
}

void Span::getStock()
{
    std::cout << "Stock[" << N << "] : ";
    for (int i = 0; i < (int)N; i++)
        std::cout << _stock[i] << " ";
    std::cout << std::endl;
}

void Span::addNumber(const unsigned int &to_add) {

    if (_stock.size() == N)
        throw std::runtime_error("Span is full");
    _stock.push_back(to_add);
}

int Span::longestSpan() {
    
    
}
int Span::shortestSpan() {}
