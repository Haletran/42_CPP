/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:22:33 by codespace         #+#    #+#             */
/*   Updated: 2024/05/08 15:47:15 by codespace        ###   ########.fr       */
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
    return;
}

void Zombie::announce( void ) 
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}