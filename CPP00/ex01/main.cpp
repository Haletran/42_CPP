/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/08 15:19:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
    Phonebook phonebook;
    while(1)
    {
        std::cout << "Enter an option: ";
        std::string option;
        std::cin >> option;
        if (std::cin.eof()) {std::cout << std::endl; break;}
        if (option == "EXIT" || option.empty()) {break;}
        else {phonebook.check_option(option);}
    }
    return (0);
}
