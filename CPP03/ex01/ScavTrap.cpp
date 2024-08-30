/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:25:52 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/30 12:51:18 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Scvatrap " << name << "created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Thank you for your service " << name << std::endl;
}

 
