/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:48 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 12:37:49 by codespace        ###   ########.fr       */
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