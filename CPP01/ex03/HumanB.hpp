/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:12 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 13:04:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(void);
        ~HumanB(void);
        void attack(void);
        HumanB(std::string name) : name(name){}
        void setWeapon(Weapon& weap) { weapon = &weap;}
    private:
        std::string name;
        Weapon* weapon;
};

#endif