#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain constructor called" << std::endl; }
Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain::Brain(const Brain &cpy) {
  for (int i = 0; i < 100; i++)
    this->ideas[i] = cpy.ideas[i];
}

Brain Brain::operator=(const Brain &src) {
  if (this != &src)
    for (int i = 0; i < 100; i++)
      this->ideas[i] = src.ideas[i];
  return (*this);
}
