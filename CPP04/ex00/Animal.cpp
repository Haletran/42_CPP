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

Animal::Animal()
{
    
}

Animal::~Animal()
{
    
    
}

Animal::Animal(std::string type)
{
    this->type = type;
}

std::string Animal::getType() const
{
    return (this->type);
}

/* void Animal::setType(std::string& type)
{
} */

void Animal::makeSound() const
{
    std::cout << "* Random Animal noise *" << std::endl;
}


