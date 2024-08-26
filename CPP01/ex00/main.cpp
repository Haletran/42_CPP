/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:43 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:57:48 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *robert = newZombie("Robert");
    Zombie *francois = newZombie("Francois");
    robert->announce();
    randomChump("Michel");
    delete robert;
    delete francois;
    return (0);
}