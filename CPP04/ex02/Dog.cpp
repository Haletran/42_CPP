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

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
}

Dog::~Dog(){
    delete _brain;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
    *this = cpy;
}

Dog& Dog::operator=(const Dog& src)
{
    if (this != &src)
        this->type = src.getType();
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "* Waf Waf *" << std::endl;
}
