/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:22:30 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:07:49 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (0);
    Zombie *zombie = new Zombie[N];
    if (!zombie)
        return (NULL);
    for (int i = 0; i < N; i++)
        zombie[i].set_name(name);
    return (zombie);
}

void delete_horde(Zombie *horde)
{
    delete[] horde;
}