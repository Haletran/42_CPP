/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:48 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:04:45 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 void randomChump( std::string name )
 {
    Zombie zombie;
    if (name.empty())
      name = "No_name";
    zombie.set_name(name);
    zombie.announce();
 }