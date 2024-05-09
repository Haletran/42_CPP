/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:15 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 13:29:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
    return ;
}

HumanB::~HumanB(void)
{
    return;
}

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