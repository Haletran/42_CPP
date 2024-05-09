/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:19:31 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 17:51:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        //constructeur
        Fixed(void);
        // constructeur de recopie
        Fixed(const Fixed&);
        //operateur d'affectation
        Fixed &operator=(const Fixed &src);
        //destructeur
        ~Fixed(void);
         int getRawBits( void ) const;
         void setRawBits( int const raw );
    private:
        int value;
        static const int bits = 8;
};

#endif