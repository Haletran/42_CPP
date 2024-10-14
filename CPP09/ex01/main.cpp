#include "RPN.hpp"
#include <stdexcept>

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cerr << "Not enough or too much arguments" << std::endl;
        return (1);
    }
    std::string input = argv[1];
    try {
        Calculator instance(input);
        instance.getStock_nb();
    } catch (std::runtime_error &e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    return (0);
}
