/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:29:21 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 20:02:43 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        void debug(void); 
        void info(void);
        void warning(void);
        void error(void);
};

#endif