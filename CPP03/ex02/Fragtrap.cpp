/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:18:07 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/31 13:52:40 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    if (name.empty())
        this->name = "Unknown FragTrap";
    else
        this->name = name;
    std::cout << "FragTrap " << name << " has spawned"<< std::endl;
    this->_hit_points = 100;
    this->_attack_damage = 30;
    this->_energy_points = 100;
}

FragTrap::FragTrap(FragTrap const &cpy)
{
    *this = cpy;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap " << name << " has dispawned" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " want to do a high five 🫸 " << std::endl;
}

