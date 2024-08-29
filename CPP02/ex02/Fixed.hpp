/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:10:55 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/29 10:31:10 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed& cpy);
        Fixed(const int i_con);
        Fixed (const float f_con);
        ~Fixed();
        Fixed& operator=(const Fixed& src);

        // FUNCTIONS
        int getRawBits( void ) const;
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        static Fixed min(const Fixed &i1, const Fixed &i2);
        static Fixed min(Fixed &i1, Fixed &i2);
        static Fixed max(const Fixed &i1, const Fixed &i2);
        static Fixed max(Fixed &i1, Fixed &i2);

        // SURCHARGE
        Fixed operator--();
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator+(const Fixed& other);

        // BOOL
        bool operator!=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
    private:
        int value;
        static const int BITS = 8;        
};

std::ostream &operator<<(std::ostream& os, Fixed const &value);

#endif