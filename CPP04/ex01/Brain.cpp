#include "Brain.hpp"


Brain::Brain() {}
Brain::~Brain() {}

Brain::Brain(const Brain& cpy)
{
    *this = cpy;
}

Brain Brain::operator=(const Brain& src)
{
    if (this != &src)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    return (*this);
}
