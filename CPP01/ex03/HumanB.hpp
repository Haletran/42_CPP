/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:12 by codespace         #+#    #+#             */
/*   Updated: 2024/05/08 16:52:58 by codespace        ###   ########.fr       */
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
        void setWeapon(Weapon weapon);
        HumanB(std::string name) : name(name) {}
    private:
        std::string name;
        Weapon weapon;
};

#endif