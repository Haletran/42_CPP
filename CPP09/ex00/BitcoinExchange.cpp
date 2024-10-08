#include "BitcoinExchange.hpp"
#include <regex.h>
#include <stdlib.h>

BitcoinExchange::BitcoinExchange(std::string filename) {

    std::string line;
    std::ifstream file(filename.c_str());
    if (file.is_open())
    {
        std::getline(file, line);
        while (std::getline(file, line))
        {
            if (line.length() >= 13)
                _stock[line.substr(0, 10)] = std::strtof(line.substr(13).c_str(), NULL);
        }
    }
    file.close();
    getStock();
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::getStock()
{
    for (std::map<std::string, float>::iterator it = _stock.begin(); it != _stock.end(); ++it)
        std::cout << it->first << " => " << it->second << std::endl;
}

int error_args()
{
    std::cerr << "Error: could not open file." << std::endl;
    return (1);
}
