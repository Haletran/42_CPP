#include "BitcoinExchange.hpp"
#include <regex.h>

int error_args(int option)
{
    switch (option)
    {
        case 1:
            std::cerr << BRED"Error:" RESET<< " could not open file." << std::endl;
            break;
        case 2:
            std::cerr << BRED"Error:" RESET<< " Not enough or too much arguments" << std::endl;
            break;
        default:
            std::cerr << BRED"Error:" RESET<< " Unknown error" << std::endl;
    }
    return (1);
}

bool check_db_error(std::string line)
{
    regex_t parser;
    if (regcomp(&parser, "^[0-9]{4}-[0-9]{2}-[0-9]{2},[0-9]+(\\.[0-9]+)?$", REG_EXTENDED) != 0)
    {
        std::cerr << BRED"Error: " RESET<< "Could not compile regex" << std::endl;
        regfree(&parser);
        return (true);
    }
    if (regexec(&parser, line.c_str(), 0, NULL, 0) != 0)
    {
        std::cerr << BRED"Error :" RESET << " Invalid data format => ";
        regfree(&parser);
        return (true);
    }
    regfree(&parser);
    return (false);
}

bool check_if_digit(const char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]) && str[i] != ' ' && str[i] != '.')
            return (0);
        i++;
    }
    return (1);
}

bool check_input_file_error(std::string line)
{
    regex_t date;

    regcomp(&date, "^[0-9]{4}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])$", REG_EXTENDED);
    if (regexec(&date, line.substr(0, 10).c_str(), 0, NULL, 0) != 0)
    {
        std::cerr << BRED"Error : " RESET<< "bad input => " << line.substr(0, 10) << std::endl;
        regfree(&date);
        return (true);
    }
    if (line.length() >= 12 && std::strtof(line.substr(12).c_str(), NULL) < 0)
    {
        std::cerr << BRED"Error : " RESET<< "not a positive number" << std::endl;
        regfree(&date);
        return (true);
    }
    if (line.length() >= 12 && std::strtod(line.substr(12).c_str(), NULL) > 1000)
    {
        std::cerr << BRED"Error :" RESET<< " too large a number" << std::endl;
        regfree(&date);
        return (true);
    }
    if (!check_if_digit(line.substr(12).c_str()))
    {
        std::cerr << BRED"Error :" RESET<< " Invalid input" << std::endl;
        regfree(&date);
        return (true);
    }
    regfree(&date);
    int year = atoi(line.substr(0, 4).c_str());
    if (!(year % 4) && (year % 100 || !(year % 400)))
    {
        if (atoi(line.substr(5, 2).c_str()) == 2 && atoi(line.substr(8, 2).c_str()) > 29)
        {
            std::cerr << BRED"Error :" RESET<< " invalid date" << std::endl;
            return (true);
        }
    }
    else if (atoi(line.substr(5, 2).c_str()) == 2 && atoi(line.substr(8, 2).c_str()) > 28)
    {
        std::cerr << BRED"Error :" RESET<< " not a leap year" << std::endl;
        return (true);
    }
    return (false);
}
