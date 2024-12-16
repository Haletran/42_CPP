#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename) {
    std::string line;
    this->_filename = filename;
    std::ifstream file(DB_NAME);
    if (!file.is_open())
    {
        std::cerr << BRED "Error: " RESET<< "could not open db."<< std::endl;
        return ;
    }
    std::getline(file,line);
    if (line.compare(0, 18, "date,exchange_rate"))
    {
        std::cerr << BRED "Error :" RESET<< "Invalid DB name" << std::endl;
        return ;
    }
    while (std::getline(file, line))
    {
        if (check_db_error(line))
        {
            std::cerr << line << std::endl;
            file.close();
            return ;
        }
        _stock[line.substr(0, 10)] = std::strtod(line.substr(11).c_str(), NULL);
    }
    file.close();
    convert();
}

BitcoinExchange::~BitcoinExchange() {}


void BitcoinExchange::convert()
{
    std::ifstream input_file(this->_filename.c_str());
    std::string line;

    std::getline(input_file, line);
    if (line.compare(0, 12, "date | value"))
    {
        std::cerr << BRED "Error : " RESET<< "Invalid input name" << std::endl;
        return;
    }
    while (getline(input_file, line))
    {
        if (check_input_file_error(line) == false)
        {
            float line_value = std::strtof(line.substr(12).c_str(), NULL);
            std::string date_key = line.substr(0, 10);
            std::map<std::string, float>::iterator it = _stock.find(date_key);
            if (it != _stock.end())
                std::cout << date_key << " => " << line_value << " = " << line_value * it->second << std::endl;
            else
            {
                it = _stock.lower_bound(date_key);
                --it;
                std::string next_key = it->first;
                float _stock_value = it->second;
                std::cout << next_key << " => " << line_value << " = " << line_value * _stock_value << std::endl;
            }
        }
    }
}

void BitcoinExchange::getStock()
{
    for (std::map<std::string, float>::iterator it = _stock.begin(); it != _stock.end(); ++it)
        std::cout << it->first << " => " << it->second << std::endl;
}
