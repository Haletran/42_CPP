/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:43 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:15:55 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog Default Constructor called" << std::endl;
  this->_brain = new Brain();
}

Dog::~Dog() {
  std::cout << "Dog Destructor called" << std::endl;
  delete _brain;
}

Dog::Dog(const Dog &cpy) : Animal(cpy) {
  std::cout << "COPY" << std::endl;
  this->type = cpy.type;
  this->_brain = new Brain(*cpy._brain);
}

Dog Dog::operator=(const Dog &src) {
  std::cout << "OPERATOR" << std::endl;

  if (this != &src) {
    this->type = src.getType();
    *this->_brain = *src._brain;
  }
  return (*this);
}

void Dog::makeSound() const { std::cout << "* Waf Waf *" << std::endl; }
