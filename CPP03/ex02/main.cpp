/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:55:55 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:11:25 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap bernard("Bernard");
    ScavTrap michel("Michel");
    FragTrap louis("Louis");

    bernard.takeDamage(9);
    bernard.beRepaired(2);
    bernard.beRepaired(2);
    bernard.attack("test");
    bernard.beRepaired(2);
    bernard.beRepaired(0);
    bernard.takeDamage(2);
    bernard.beRepaired(2);
    bernard.beRepaired(1);
    bernard.takeDamage(10);

    michel.attack("enemi");
    michel.guardGate();
    michel.beRepaired(2);
    louis.highFivesGuys();

    

    return (0);
}