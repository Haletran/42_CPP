/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:15 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 20:15:43 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB(void){};

void HumanB::setWeapon(Weapon& weap) {weapon = &weap;}

void HumanB::attack()
{
    if (weapon == NULL || weapon->getType().empty())
        if (name.empty())
            std::cout << "HumanB" << " attacks with their bare hands " << std::endl;
        else
            std::cout << name << " attacks with their bare hands " << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}