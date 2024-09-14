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

Cat::Cat()  : Animal("Cat") {
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
    *this = cpy;
}

Cat& Cat::operator=(const Cat& src)
{
    if (this != &src)
        this->type = src.getType();
    return (*this);
}


void Cat::makeSound() const
{
    std::cout << "* Miaou Miaou *" << std::endl;
}
