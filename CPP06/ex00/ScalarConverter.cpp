#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <climits>
#include <ostream>

bool CheckErrors(std::string value)
{
    std::string handle_array[6] = {"-inff", "+inff", "-inf", "nan", "inf", "nanf"};
    for (int i = 0; i < 6; i++)
        if (handle_array[i] == value)
            return true;
    return false;
}

bool check_string(std::string value)
{
    for (int i = 0; i < (int)value.length(); i++)
    {
        if (std::isalpha(value[i]))
            if (std::isalpha(value[i + 1]))
                return (true);
    }
    return false;
}

bool isDouble(std::string value) {
    for (int i = 0; i < (int)value.length(); i++)
    {
        if (value[i] == '.')
            if (std::isdigit(value[i + 1]) && value[i + 2] != 'f')
                return true;
    }
    return false;
}
bool isFloat(std::string value) {
    for (int i = 0; i < (int)value.length(); i++)
    {
        if (value[i] == '.')
            if (std::isdigit(value[i + 1]) && value[i + 2] == 'f')
                return true;
    }
    return false;

}

void ScalarConverter::convert(std::string value)
{
    bool case_error = CheckErrors(value);
    bool alpha_error = check_string(value);
    std::cout << std::fixed << std::setprecision(1);

    if (!case_error && alpha_error)
    {
        std::cerr << "Too much character in user input..." << std::endl;
        return ;
    }

    if (isDouble(value))
    {
        double num_d = std::strtod(value.c_str(), NULL);
        std::cout << "char : ";
        if (case_error)
            std::cout << "impossible" << std::endl;
        else
            std::cout << "Not Displayable" << std::endl;
        std::cout << "int : " << static_cast<int>(num_d) << std::endl;
        std::cout << "float : " << static_cast<float>(num_d) << "f" << std::endl;
        std::cout << "double : " << num_d << std::endl;
        return ;
    }

    if (isFloat(value))
    {
        float num_f = std::strtof(value.c_str(), NULL);
        std::cout << "char : ";
        if (case_error)
            std::cout << "impossible" << std::endl;
        else
            std::cout << "Not Displayable" << std::endl;
        std::cout << "int : " << static_cast<int>(num_f) << std::endl;
        std::cout << "float : " << num_f << "f" << std::endl;
        std::cout << "double : " << static_cast<double>(num_f) << std::endl;
        return ;
    }

    if (std::isalpha(value[0]))
    {
        char num_c = static_cast<char>(value[0]);
        std::cout << "char : ";
        if (case_error)
            std::cout << "impossible" << std::endl;
        else
            std::cout << num_c << std::endl;
        std::cout << "int : " << static_cast<int>(value[0]) << std::endl;
        std::cout << "float : " << static_cast<float>(value[0]) << std::endl;
        std::cout << "double : " << static_cast<double>(value[0]) << std::endl;
        return ;
    }

    double origin = std::strtod(value.c_str(), NULL);
    int num = static_cast<int>(origin);
    std::cout << "char : ";
    if (case_error || value[0] == '-' || !std::isprint(num))
        std::cout << "Not Displayable" << std::endl;
    else
        std::cout << static_cast<char>(num) << std::endl;
    std::cout << "int : " << num << std::endl;
    std::cout << "float : " << static_cast<float>(num) << std::endl;
    std::cout << "double : " << static_cast<double>(num) << std::endl;
    return ;
}
