/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:20:36 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:07:39 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 10;
    Zombie *horde;
    horde = zombieHorde(n, "Michel");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete_horde(horde);
}
