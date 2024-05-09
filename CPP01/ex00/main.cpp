/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:43 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 12:37:54 by codespace        ###   ########.fr       */
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