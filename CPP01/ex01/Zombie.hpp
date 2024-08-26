/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:22:58 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:55:27 by bapt             ###   ########.fr       */
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
        void set_name(std::string given_name);
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );
void delete_horde(Zombie *horde);

#endif