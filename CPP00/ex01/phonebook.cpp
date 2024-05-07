/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/07 18:34:37 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// Constructor and Destructor
Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	this->index = 1;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void check_input(std::string input)
{
    if (input == "ADD")
        std::cout << "ADD" << std::endl;
    else if (input == "SEARCH")
        std::cout << "SEARCH" << std::endl;
    else
        std::cout << "Invalid input" << std::endl;
    return ;
}

int	main(void)
{
    Contact	contact;
    std::string option;
    while(1)
    {
        std::cout << "Enter an option: ";
        std::cin >> option;
        if (option == "EXIT" || option.empty())
            break;
        check_input(option);
    }   
    contact.~Contact();
	return (0);
}
