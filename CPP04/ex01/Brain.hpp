#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain&cpy);
        Brain operator=(const Brain& src);
        ~Brain();
    protected:
        std::string ideas[100];
};




#endif
