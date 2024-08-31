/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:25:18 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/31 12:48:50 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "Colors.hpp"


class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &cpy);
        ScavTrap &operator=(ScavTrap const &src);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};


#endif