/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:55:21 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/31 12:48:54 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "Colors.hpp"
#include <iostream>

class ClapTrap {
  public:
    // COPLIAN
    ClapTrap();
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
    int get_life();
    int get_energy();
    int get_attack();

    
  protected:
    std::string name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
};


// COLORS




#endif