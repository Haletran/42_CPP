/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/07 20:04:14 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int index_global = 1;

// Constructor and Destructor
Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	this->index = 0;
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

void search_contact(Contact *contact)
{
    int index_input = 0;
    int i = 0;
    //print the table
    std::cout << "Enter an index..." << std::endl;
    std::cin >> index_input;
    if (index_input > 8)
    {
        std::cout << "Only 8 contacts !" << std::endl;
        return ;
    }
    std::cout << index_input << std::endl;
    while (i < MAX_CONTACTS)
    {
        if (contact[i].index == index_input)
        {
            std::cout << "first_name : " << contact[i].first_name << std::endl;
            std::cout << "last_name : " << contact[i].last_name << std::endl;
            std::cout << "last_name : " <<contact[i].nickname << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "Contact not found" << std::endl;
    return ;
}


void Contact::add_contact(void)
{
    if (this->index > MAX_CONTACTS)
    {
        std::cout << "Phonebook is full" << std::endl;
        return ;
    }
    this->index = index_global;
    std::cout << "=============================" << std::endl;
    std::cout << "Enter first name: ";
    std::cin >> this->first_name;
    std::cout << "Enter last name: ";
    std::cin >> this->last_name;
    std::cout << "Enter nickname: ";
    std::cin >> this->nickname;
    std::cout << "Enter phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Enter darkest secret: ";
    std::cin >> this->darkest_secret;
    std::cout << "=============================" << std::endl;
    return ;
}

void print_table(Contact *contact)
{
    for (int  i = 0; i < MAX_CONTACTS; i++)
        std::cout << contact[i].first_name << std::endl;
    return ;
}

void check_input(std::string input, Contact* contact)
{
    if (input == "ADD")
    {
        contact[index_global].add_contact();
        index_global++;
        std::cout << index_global << std::endl;
    }
    else if (input == "SEARCH")
        search_contact(contact);
    else if (input == "DEBUG")
        print_table(contact);
    else
        std::cout << "Invalid input" << std::endl;
    return ;
}

int	main(void)
{
    Contact	contact[MAX_CONTACTS];
    while(1)
    {
        std::cout << "Enter an option: ";
        std::string option;
        std::cin >> option;
        if (option == "EXIT" || option.empty())
            break;
        check_input(option, contact);
    }   
    for (int i = 1; i < 8; i++)
    {
        contact[i].~Contact();
    }
	return (0);
}
