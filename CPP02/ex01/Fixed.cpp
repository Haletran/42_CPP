/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:13:41 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/28 12:15:35 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
     std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int i_con) 
{
    std::cout << "Int constructor called" << std::endl;
    this->value = i_con;
};

Fixed::Fixed(const float f_con)
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() 
{ 
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed& src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->value = src.getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    value = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

float Fixed::toFloat( void ) const
{
    
}



int Fixed::toInt( void ) const
{

}