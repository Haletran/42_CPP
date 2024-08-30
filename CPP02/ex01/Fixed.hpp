/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:10:55 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/29 12:21:30 by bapasqui         ###   ########.fr       */
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
        Fixed &operator=(const Fixed& src);
        int getRawBits( void ) const;
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
    private:
        int value;
        static const int BITS = 8;        
};

// supercharge d'operateur pour changer sa fonction
std::ostream &operator<<(std::ostream& os, Fixed const &value);

#endif