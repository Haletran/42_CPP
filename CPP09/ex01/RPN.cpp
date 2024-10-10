#include "RPN.hpp"
#include <stdexcept>
#include <sstream>

bool is_op(char op)
{
    const char* array = "+-/*";
    for (int i = 0; array[i] != '\0'; ++i)
    {
        if (array[i] == op)
            return (true);
    }
    return (false);
}

bool isbigger(int value)
{
    if (value > 9 || value < 0)
        return (true);
    return (false);
}

Calculator::Calculator(std::string value)
{
    // parsing before so that i can check if the string is valid for RPN
    std::istringstream iss(value);
    std::string token;
    while (iss >> token)
    {
        if (std::isdigit(token[0]) || (token[0] == '.' && token.size() > 1))
        {
            double num = std::strtod(token.c_str(), NULL);
            isbigger(num) == false ? _stock_nb.push(num) : throw std::runtime_error(" too large a number");
        }
        else if (is_op(token[0]) && token.size() == 1)
        {
            double num2 = _stock_nb.top();
            _stock_nb.pop();
            double num3 = _stock_nb.top();
            _stock_nb.pop();
            if (token[0] == '+')
                _stock_nb.push(num2 + num3);
            else if (token[0] == '*')
                _stock_nb.push(num2 * num3);
            else if (token[0] == '-')
                _stock_nb.push(num3 - num2);
            else if (token[0] == '/')
                _stock_nb.push(num3 / num2);
        }
        else
        {
            throw std::runtime_error(" invalid character in input");
        }
    }
}

Calculator::~Calculator() {}


void Calculator::getStock_nb()
{
    if (_stock_nb.empty())
        throw std::runtime_error(" nothing in the stack");
    std::stack<double> backup(_stock_nb);
    while (!backup.empty())
    {
        std::cout << backup.top() << " ";
        backup.pop();
    }
    std::cout << std::endl;
}
