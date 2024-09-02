/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:46 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:20:04 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){}
WrongAnimal::~WrongAnimal(){}
WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    *this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& src)
{
    if (this != &src)
        *this = src;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    if (this->type.empty())
        return ("Wrong Animal");
    return (this->type);
}

void WrongAnimal::makeSound() const{
    std::cout << "* Meuh Meuh *" << std::endl;
}
