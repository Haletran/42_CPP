/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/08 14:17:55 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Constructor and Destructor
Phonebook::Phonebook(void)
{
    this->index_global = 1;
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void Phonebook::search_contact(void)
{
    std::cout << "Enter the index : ";
    int input;
    std::cin >> input;
    std::cout << contact[input].get_first_name() << std::endl;
    std::cout << contact[input].get_last_name() << std::endl;
    std::cout << contact[input].get_nickname() << std::endl;
    return ;
}


void Contact::add_contact(int index_global)
{
    index = index_global;
    std::cout << "=======================" << std::endl;
    std::cout << "Enter first_name : ";
    std::cin >> first_name;
    std::cout << "Enter last_name : ";
    std::cin >> last_name;
    std::cout << "Enter nickname : ";
    std::cin >> nickname;
    std::cout << "Enter phone_number : ";
    std::cin >> phone_number;
    std::cout << "Enter darkest_secret : ";
    std::cin >> darkest_secret;
    std::cout << "=======================" << std::endl;
}

void Phonebook::check_option(std::string option)
{
    if (option == "ADD")
    {
        contact[index_global].add_contact(index_global);
        index_global++;
    }
    else if (option == "SEARCH")
        search_contact();
    else
        std::cout << "Invalid option." << std::endl;
}

int	main(void)
{
    Phonebook phonebook;
    while(1)
    {
        std::cout << "Enter an option: ";
        std::string option;
        std::cin >> option;
        if (option == "EXIT" || option.empty())
            break;
        phonebook.check_option(option);
    }
    return (0);
}
