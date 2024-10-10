#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <exception>

class Calculator {
    private:
        std::stack<double> _stock_nb;
    public:
        // Coplian
        Calculator(std::string value);
        ~Calculator();
        // Calculator (const Calculator& cpy);
        // Calculator operator=(const Calculator& src);
        void getStock_nb();
};
