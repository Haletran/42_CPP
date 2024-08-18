/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/08/12 18:46:10 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
    Phonebook phonebook;
    while(1)
    {
        if (std::cin.eof()) {break;}
        std::cout << "Enter an option: ";
        std::string option;
        getline(std::cin, option);
        if (std::cin.eof()) {std::cout << std::endl; break;}
        if (option == "EXIT") {break;}
        phonebook.check_option(option);
    }
    std::cout << "Bye !" << std::endl;
    return (0);
}
