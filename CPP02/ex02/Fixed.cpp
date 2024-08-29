/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:13:41 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/29 10:17:56 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{
};

Fixed::Fixed(const int i_con) 
{
    this->value = i_con << BITS;
};

Fixed::Fixed(const float f_con)
{
    this->value = roundf(f_con * (1 << BITS));
}

Fixed::~Fixed() 
{ 
};

Fixed::Fixed(const Fixed& cpy)
{
    this->value = cpy.value;
}

Fixed &Fixed::operator=(const Fixed& src)
{
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
    return (value);
}

float Fixed::toFloat( void ) const
{
    return((float)value / (1 << BITS));
}

int Fixed::toInt( void ) const
{
    return (this->value >> BITS);
}

std::ostream &operator<<(std::ostream& os, Fixed const &value)
{
    os << value.toFloat();
    return (os);
}

Fixed Fixed::min(const Fixed &i1, const Fixed &i2)
{
    if (i1.getRawBits() < i2.getRawBits())
        return (i1);
    return (i2);  
}

Fixed Fixed::min(Fixed &i1, Fixed &i2)
{
    if (i1.getRawBits() < i2.getRawBits())
        return (i1);
    return (i2);  
}

Fixed Fixed::max(Fixed &i1, Fixed &i2)
{
    if (i1.getRawBits() > i2.getRawBits())
        return (i1);
    return (i2);  
}

Fixed Fixed::max(const Fixed &i1, const Fixed &i2)
{
    if (i1.getRawBits() > i2.getRawBits())
        return (i1);
    return (i2);  
}

Fixed& Fixed::operator*(const Fixed& other)
{
    this->value = this->toFloat() * other.toFloat();
    return(*this);
}


Fixed& Fixed::operator-(const Fixed& other)
{
    this->value = this->toFloat() - other.toFloat();
    return(*this);
}

Fixed& Fixed::operator+(const Fixed& other)
{
    this->value = this->toFloat() + other.toFloat();
    return(*this);
}

Fixed& Fixed::operator/(const Fixed& other)
{
    this->value = this->toFloat() / other.toFloat();
    return(*this);
}

Fixed& Fixed::operator--()
{
    value--;
    return (*this);
    
}
Fixed& Fixed::operator++()
{
    value++;
    return (*this);
};

Fixed Fixed::operator++(int)
{
    Fixed   tmp(*this);
    operator++();
    return (tmp);
};


Fixed Fixed::operator--(int)
{
    Fixed   tmp(*this);
    operator--();
    return (tmp);
};
