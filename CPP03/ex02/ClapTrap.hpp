/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:55:21 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 14:11:53 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "Colors.hpp"
#include <iostream>

class ClapTrap {
  public:
    // COPLIAN
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& cpy);
    ClapTrap& operator=(const ClapTrap& src);
    ~ClapTrap();

    // FUNCTIONS
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // GETTER
    std::string get_name();
    int get_life() const;
    int get_energy() const;
    int get_attack() const;

    
  protected:
    std::string name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
  private:
    ClapTrap();
};


// COLORS




#endif