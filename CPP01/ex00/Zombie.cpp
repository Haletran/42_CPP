/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:51 by codespace         #+#    #+#             */
/*   Updated: 2024/05/08 15:13:47 by codespace        ###   ########.fr       */
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
    std::cout << get_name() << " the Zombie was killed" << std::endl;
    return;
}

void Zombie::announce( void ) 
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}