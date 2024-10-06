#include "Span.hpp"
#include <algorithm>
#include <limits>


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

unsigned int Span::getN()
{
    return(this->N);
}

void Span::addNumber(const unsigned int &to_add) {

    if (_stock.size() == N)
        throw std::runtime_error("Span is full");
    _stock.push_back(to_add);
    std::sort(_stock.begin(), _stock.end());
}

int Span::shortestSpan() {
    if (_stock.size() < 2)
        throw std::runtime_error("Not enough elements to find a span");

    int shortest_span = std::numeric_limits<int>::max();
    for (int i = 1; i < (int)_stock.size(); ++i) {
        int span = _stock[i] - _stock[i - 1];
        if (span < shortest_span) {
            shortest_span = span;
        }
    }
    return (shortest_span);
}

int Span::longestSpan()
{
    if (_stock.size() < 2)
        throw std::runtime_error("Not enough elements to find a span");
    int longest_span = *std::max_element(_stock.begin(), _stock.end()) - *std::min_element(_stock.begin(), _stock.end());
    return (longest_span);
}


void Span::generateStock(std::vector<int> arr) {
    if (arr.size() > this->N)
        throw std::runtime_error("Exceding the number that it can stock");
    _stock.assign(arr.begin(), arr.end());
    std::sort(_stock.begin(), _stock.end());
}
