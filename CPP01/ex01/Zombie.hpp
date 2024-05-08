/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:22:58 by codespace         #+#    #+#             */
/*   Updated: 2024/05/08 15:46:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void announce( void );
        void set_name(std::string given_name) {name = given_name;}
        std::string get_name(void) {return name; }
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );
void delete_horde(Zombie *horde);

#endif