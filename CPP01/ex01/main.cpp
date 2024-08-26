/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:20:36 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:53:28 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 100;
    Zombie *horde;
    horde = zombieHorde(n, "Michel");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete_horde(horde);
}
