/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:50:49 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/31 13:17:35 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c (5);
	Fixed d (2);
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << std::endl;

	std::cout << "Mes tests :" << std::endl;
	std::cout << "5 / 2 = " << c / d << std::endl;
	std::cout << "5 * 2 = " << c * d << std::endl;
	std::cout << "5 - 2 = " << c - d << std::endl;
	std::cout << "5 + 2 = " << c + d << std::endl;
	c = 10;
	d = 6;
	std::cout << "10 / 6 = "<< c / d << std::endl;
	std::cout << "10 * 6 = "<< c * d << std::endl;
	std::cout << "10 - 6 = "<< c - d << std::endl;
	std::cout << "10 > 6 = "<< (c > d) << std::endl;
	std::cout << "10 < 6 = "<< (c < d) << std::endl;
	std::cout << "10 >= 6 = "<< (c >= d) << std::endl;
	std::cout << "10 <= 6 = "<< (c <= d) << std::endl;
	std::cout << "10 != 6 = "<< (c != d) << std::endl;
	std::cout << "10 == 6 = "<< (c == d) << std::endl;
	std::cout << "Max test : " << Fixed::max( c, d ) << std::endl;
	std::cout << "Min test : " << Fixed::min( c, d ) << std::endl;
	d = 10;
	std::cout << "10 == 10 = "<< (c == d) << std::endl;
	
	return 0;
}
