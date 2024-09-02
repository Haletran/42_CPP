/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:48 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:23:58 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    
}

WrongCat::~WrongCat() 
{
    
}


WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
    *this = cpy;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    if (this != &src)
        *this = src;
    return (*this);
}

