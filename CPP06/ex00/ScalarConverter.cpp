#include "ScalarConverter.hpp"
#include <cctype>
#include <iostream>

bool CheckErrors(std::string value)
{
    std::string handle_array[6] = {"-inff", "+inff", "-inf", "nan", "inf", "nanf"};
    for (int i = 0; i < 6; i++)
        if (handle_array[i] == value)
            return true;
    return false;
}

void ScalarConverter::convert(std::string value)
{
    // SET VARIABLES
    bool error = CheckErrors(value);
    std::cout << std::fixed << std::setprecision(1);
    double origin = std::strtod(value.c_str(), NULL);
    char c_cast = static_cast<char>(origin);
    float f_cast = static_cast<float>(origin);
    double d_cast = static_cast<double>(origin);
    int i_cast = static_cast<int>(origin);
    bool digitCheck = std::isdigit(value[0]);
    bool alphaCheck = std::isalpha(value[0]);

    if (value.length() > 1 && !digitCheck)
    {
        std::cout << "Only one character, not a string..." << std::endl;
        return ;
    }

    if (alphaCheck && !error)
    {
        i_cast = static_cast<int>(value[0]);
        d_cast = static_cast<double>(value[0]);
        f_cast = static_cast<float>(value[0]);
    }
    // CHECK ERRORS
    switch (static_cast<int>(error)) {
        case 1:
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            break;
        }
        case 0:
        {
            if (!digitCheck && value.length() == 1)
                std::cout << "char : " << value << std::endl;
            else if (!alphaCheck && !(value.length() > 4))
                std::cout << "char : " << c_cast << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << i_cast << std::endl;
            break;
        }
    }
    // FLOAT AND DOUBLE PART
    std::cout << "float: ";
    if (value[value.length() - 1] == 'f' && error)
        std::cout << f_cast << std::endl;
    else
        std::cout << f_cast << "f" << std::endl;

    std::cout << "double: ";
    std::cout << d_cast << std::endl;
}
