/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:15 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:16:09 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){};

HumanB::~HumanB(void){};

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