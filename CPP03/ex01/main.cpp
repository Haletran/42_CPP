/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:55:55 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 11:07:53 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap bernard("Bernard");
    ScavTrap michel("Michel");

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

    michel.attack("enemi");
    michel.guardGate();
    michel.beRepaired(2);
    michel.takeDamage(19);

    return (0);
}
