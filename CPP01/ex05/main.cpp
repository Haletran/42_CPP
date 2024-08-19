/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:28:18 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:54:27 by bapasqui         ###   ########.fr       */
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