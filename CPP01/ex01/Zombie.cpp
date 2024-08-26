/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:22:33 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:55:54 by bapt             ###   ########.fr       */
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
    std::cout << name << " is dead !" << std::endl;
    return;
}

void Zombie::set_name(std::string given_name)
{
    if (name.empty())
        name = "No_name";
    name = given_name;
}

void Zombie::announce( void ) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}