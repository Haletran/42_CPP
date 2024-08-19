/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:51 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:06:02 by bapasqui         ###   ########.fr       */
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

void Zombie::set_name( std::string name )
{
    if (name.empty())
        name = "No_name";
    name = given_name;
}

std::string Zombie::get_name( void )
{
    return (this->name);
}