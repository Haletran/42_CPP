/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:46 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:04:40 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* zombie = new Zombie();
    if (!zombie)
        return (NULL);
    if (name.empty())
        name = "No_name";
    zombie->set_name(name);
    return (zombie);
}