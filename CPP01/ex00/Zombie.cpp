/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:51 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:56:22 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "";
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << name << " the Zombie was killed" << std::endl;
    return;
}

void Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void Zombie::set_name(std::string given_name)
{
    if (name.empty())
        name = "No_name";
    name = given_name;
}