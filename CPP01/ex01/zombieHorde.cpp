/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:22:30 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:55:31 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0 || N > 10000)
    {
        std::cout << "Not enough or too much zombie in the horde" << std::endl;
        return (0);
    }
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