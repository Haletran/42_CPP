/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:28:18 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 17:13:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl_instance;
    
    harl_instance.complain("DEBUG");
    std::cout << std::endl;
    harl_instance.complain("INFO");
    std::cout << std::endl;
    harl_instance.complain("WARNING");
    std::cout << std::endl;
    harl_instance.complain("ERROR");
    std::cout << std::endl;
    harl_instance.complain("asdasd");
    harl_instance.complain("");
    return (0);
}