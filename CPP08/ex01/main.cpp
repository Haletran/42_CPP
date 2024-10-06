#include "Span.hpp"
#include <stdexcept>

int main()
{

    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.getStock();
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::runtime_error & e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        Span sp = Span(10);
        srand(time(0));
        std::vector<int> arr;
        for (int i = 0; i < 10; i++)
            arr.push_back(rand() % 300); // or arr[i] = rand() % 300;
        sp.generateStock(arr);
        sp.getStock();
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::runtime_error & e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    return 0;
}
