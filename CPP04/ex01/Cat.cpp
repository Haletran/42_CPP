/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:40 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:15:11 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat Constructor called" << std::endl;

  this->_brain = new Brain();
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
  delete _brain;
}

Cat::Cat(const Cat &cpy) : Animal(cpy) {
  this->type = cpy.type;
  this->_brain = new Brain(*cpy._brain);
}

Cat &Cat::operator=(const Cat &src) {
  std::cout << "OPERATOR" << std::endl;
  if (this != &src) {
    this->type = src.type;
    *this->_brain = *src._brain;
  }
  return (*this);
}

void Cat::makeSound() const { std::cout << "* Miaou Miaou *" << std::endl; }
Brain Cat::getBrain() { return (*this->_brain); }
