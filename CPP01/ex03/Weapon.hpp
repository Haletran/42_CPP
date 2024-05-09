/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:03 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 13:14:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(void);
        ~Weapon(void);
        Weapon(std::string type) : type(type) {}
        std::string getType() { return type; }
        void setType(const std::string& newType) { type = newType; }
    private:
        std::string type;
};

#endif