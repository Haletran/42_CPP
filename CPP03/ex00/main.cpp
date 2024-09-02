/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:55:55 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 13:58:28 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap bernard("bernard");
    ClapTrap michel(bernard);
    ClapTrap louis("Louis");
    louis = michel;

    bernard.takeDamage(9);
    bernard.beRepaired(2);
    bernard.beRepaired(2);
    bernard.attack("test");
    bernard.beRepaired(2);
    bernard.beRepaired(2);
    bernard.takeDamage(2);
    bernard.beRepaired(2);
    bernard.beRepaired(1);
    bernard.takeDamage(10);
    bernard.takeDamage(10);
    louis.takeDamage(10);


    return (0);
}