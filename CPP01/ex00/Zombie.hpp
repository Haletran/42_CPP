/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:43:04 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 19:56:20 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif