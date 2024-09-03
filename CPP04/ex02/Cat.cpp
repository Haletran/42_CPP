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

Cat::Cat()  : Animal("Cat")
{
    this->_brain = new Brain();
}

Cat::~Cat() {
    delete _brain;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
    *this = cpy;
}

Cat& Cat::operator=(const Cat& src)
{
    if (this != &src)
    {
        this->type = src.getType();
        this->_brain = src._brain;
    }
    return (*this);
}


void Cat::makeSound() const
{
    std::cout << "* Miaou Miaou *" << std::endl;
}
