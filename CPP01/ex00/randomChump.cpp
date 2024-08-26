/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:42:48 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:42:05 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 void randomChump(std::string name)
 {
    Zombie zombie;
    if (name.empty())
      name = "No_name";
    zombie.set_name(name);
    zombie.announce();
 }