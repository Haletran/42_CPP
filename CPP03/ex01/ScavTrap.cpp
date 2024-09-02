/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:25:52 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 14:05:46 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
    if (name.empty())
        this->name = "Unknown";
    else
        this->name = name;
    std::cout << "Scavtrap " << name << " created" << std::endl;
    this->_attack_damage = 20;
    this->_hit_points = 100;
    this->_energy_points = 50;
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
    {
        this->name = src.name;
        this->_attack_damage = src.get_attack();
        this->_energy_points = src.get_energy();
        this->_hit_points = src.get_life();
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    if (this->_hit_points <= 0)
    {   std::cout << "ScavTrap" << this->name << " has been defeated or is out of health." << std::endl; return; }
    std::cout << "GATE-KEEPER MODE : activated" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
    {   std::cout << "ScavTrap" << this->name << " has been defeated or is out of health." << std::endl; return; }
    if (this->_energy_points <= 0)
        std::cout << "ScavTrap " << this->name << " has not enough energy to attack" << std::endl;
    else 
    {
        this->_energy_points--;
        if (target.empty())
            std::cout << "Scavtrap " << this->name << " attacks but there is no target, causing "<< this->_attack_damage << " points of damage !" << std::endl;
        else
            std::cout << "ScavTrap " << this->name << " attacks " << target << " causing "<< this->_attack_damage << " points of damage !" << std::endl;
        if (this->_attack_damage <= 0)
            std::cout << "It's not very effective..." << std::endl;
    }
}
 
