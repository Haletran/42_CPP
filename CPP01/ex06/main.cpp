/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:28:18 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:54:44 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int get_option(std::string str)
{
    std::string OPTION[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (OPTION[i] == str)
            return (i);
    }
    return (4);
}

int main(int argc, char **argv)
{
    Harl harl_instance;
    if (!argv[1])
        return 1;
    std::string option = argv[1];

    (void)argc;
    switch (get_option(option))
    {
        case 0:
            harl_instance.complain("DEBUG");
            std::cout << std::endl;
        case 1:
            harl_instance.complain("INFO");
            std::cout << std::endl;
        case 2:
            harl_instance.complain("WARNING");
            std::cout << std::endl;
        case 3: 
            harl_instance.complain("ERROR");
            break;
        case 4:
             harl_instance.complain(option);
             break;
    }
    return (0);
}