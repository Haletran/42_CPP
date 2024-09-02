/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:36 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:17:44 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::~Animal() {}

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal::Animal(const Animal& cpy)
{
    *this = cpy;
}

Animal &Animal::operator=(const Animal& src)
{
    if (this != &src)
        this->type = src.getType();
    return (*this);
}

std::string Animal::getType() const
{
    if (type.empty())
        return ("Random Animal");
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "* Random Animal noise *" << std::endl;
}
