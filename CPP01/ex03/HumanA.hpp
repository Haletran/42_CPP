/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:19:18 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 13:05:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(void);
        ~HumanA(void);
        void attack(void);
        HumanA(std::string name, Weapon& weapon) : name(name), weapon(&weapon) {}
    private:
        std::string name;
        Weapon* weapon;
};


#endif