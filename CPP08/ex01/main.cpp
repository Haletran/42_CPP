#include "Span.hpp"
#include <stdexcept>

int main()
{
    Span sp = Span(5);

    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(11); # more than 5 to check throw
        sp.getStock();
    } catch (std::runtime_error & e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }



    //std::cout << sp.shortestSpan() << std::endl;
    //std::cout << sp.longestSpan() << std::endl;
    return 0;
}
