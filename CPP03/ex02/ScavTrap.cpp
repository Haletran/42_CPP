/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:25:52 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/31 13:56:47 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
    std::cout << "Scavtrap " << name << " created" << std::endl;
    this->_attack_damage = 20;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->name = name;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Thank you for your service " << name << " 🫡" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy)
{
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "GATE-KEEPER MODE : activated" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points == 0)
        std::cout << "ScavTrap " << this->name << " has not enough energy to attack" << std::endl;
    else 
    {
        this->_energy_points--;
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing "<< this->_attack_damage << " points of damage !" << std::endl;
        if (this->_attack_damage == 0)
            std::cout << "It's not very effective..." << std::endl;
    }
}
 
