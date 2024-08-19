/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:20 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:15:04 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
    return ;
}

HumanA::~HumanA(void)
{
    return;
}


void HumanA::attack()
{
    if (!weapon  || weapon->getType().empty())
        if (name.empty())
            std::cout << "HumanA" << " attacks with their bare hands " << std::endl;
        else
            std::cout << name << " attacks with their bare hands " << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    
}