#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1)
        return (error_args());
    std::ifstream file(argv[1]);
    if (!file.is_open())
        return (error_args());
    file.close();

    BitcoinExchange input(argv[1]);
}

// stock the csv and parse it in the construtor
// convert from the line of get_line and check if valid instantly and give result


// parsing :
// bad input
// too large of number
// positive number
// > 1000 < 0
// format date
