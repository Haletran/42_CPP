/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:10:55 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/30 08:29:25 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed& cpy);
        Fixed& operator=(const Fixed& src);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    private:
        int value;
        static const int BITS = 8;        
};

#endif