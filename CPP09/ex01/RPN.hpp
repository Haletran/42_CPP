#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <exception>
#include <stdexcept>
#include <sstream>

#define BRED "\033[1;31m"
#define RESET "\033[0m"

class Calculator {
    private:
        std::stack<double> _stock_nb;
        Calculator (const Calculator& cpy);
        Calculator operator=(const Calculator& src);
    public:
        Calculator(std::string value);
        ~Calculator();
        void getStock_nb();
};
