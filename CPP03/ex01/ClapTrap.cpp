/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:55:58 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:14:08 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    if (name.empty())
        this->name = "Unknown";
    else
        this->name = name;
    this->_attack_damage = 0;
    this->_energy_points = 10;
    this->_hit_points= 10;
    std::cout << BG_AMBER200 "Go ClapTrap " << name << "!" RESET<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " " RED700 << "was destroyed" RESET<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points == 0)
        std::cout << "ClapTrap " << this->name << " has not enough energy to attack" << std::endl;
    else 
    {
        this->_energy_points--;
        if (target.empty())
            std::cout << "Claptrap " << this->name << " attacks but there is no target, causing "<< this->_attack_damage << " points of damage !" << std::endl;
        else
            std::cout << "Claptrap " << this->name << " attacks " << target << " causing "<< this->_attack_damage << " points of damage !" << std::endl;
        if (this->_attack_damage == 0)
            std::cout << "It's not very effective..." << std::endl;
    }

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << name << "is already dead. STOP" << std::endl;
    this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " lost " RED300 <<  amount <<  " ♥️ " RESET;
    if (this->_hit_points <= 0)
        std::cout <<  " and" RED500 << " died (RIP)" RESET<< std::endl;
    else 
        std::cout << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    int before;

    before = this->_energy_points;
    if (this->_hit_points == 10)
        std::cout << "ClapTrap " << this->name << "is already full life" << std::endl;
    else
    {
        if (this->_energy_points <= 0)
            std::cout << "ClapTrap " << this->name << " has no energy left" << std::endl;
        else if (before - (int)amount < 0)
            std::cout << "ClapTrap " << this->name << " has not enough energy to heal" << std::endl;
        else
        {
            this->_hit_points += amount;
            for(int i = 0; i < (int)amount; i++)
                this->_energy_points--;
            std::cout << "ClapTrap " << this->name  << " gained " GREEN300 << amount << " ♥️ " RESET;
            std::cout << " and lost " RED300 << before - this->_energy_points << "%" RESET <<std::endl;
        }
    }
}

// GETTER
std::string ClapTrap::get_name() {return(this->name);}
int ClapTrap::get_life(){return (this->_hit_points);}
int ClapTrap::get_energy() {return (this->_energy_points);}
int  ClapTrap::get_attack(){return (this->_attack_damage);}