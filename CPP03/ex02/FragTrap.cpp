/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:18:07 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 14:42:31 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy)
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
    if (this->_hit_points <= 0)
    { std::cout << "FragTrap" << this->name << " cannot do a high five !" << std::endl; return; }
    std::cout << "FragTrap " << name << " want to do a high five 🫸 " << std::endl;
}

