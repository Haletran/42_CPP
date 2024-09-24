#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc < 1)
    {
        std::cout << "Not enough arguments" << std::endl;
        return (1);
    }
    for (int i = 0; argv[i]; i++)
    {
        std::string value = argv[i];
        ScalarConverter::convert(value);
    }
    return (0);
}
