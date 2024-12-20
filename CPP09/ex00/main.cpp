#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1 || argc > 2)
        return (error_args(2));
    std::ifstream file(argv[1]);
    if (!file.is_open())
        return (error_args(1));
    file.close();
    BitcoinExchange input(argv[1]);
}
