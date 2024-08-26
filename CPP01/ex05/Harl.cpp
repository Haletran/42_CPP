/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapt <bapt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:29:25 by codespace         #+#    #+#             */
/*   Updated: 2024/08/26 20:00:49 by bapt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::debug(void)
{
    std::cout << "[DEBUG] " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO] " << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING] " << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR] "<< "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string OPTION[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*print_fn[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    if (level.length() <= 0)
    {
        std::cout << "[HARL] " << "Are you dumb ?" << std::endl;
        return;
    }
    while(i < 4)
    {
        if (level == OPTION[i])
        {
            (this->*print_fn[i])();
            break;
        }
        i++;
    }
    if (i == 4)
        std::cout << "[HARL] "<< "Invalid option" << std::endl; 
    return ;
}
