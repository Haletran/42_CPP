#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <iomanip>

class ScalarConverter {
    public:
        static void convert(std::string value);
    private:
        ScalarConverter();
        ~ScalarConverter();
};


#endif
