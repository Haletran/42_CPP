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

static int index_global = 1;

// Constructor and Destructor

Phonebook::Phonebook(void)
{
    Contact contact[MAX_CONTACTS];
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

Contact::Contact(void)
{
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

void print_parse(std::string str)
{
    for (int i = 0; i < 9; i++)
        std::cout << str[i];
    std::cout << "." << std::endl;
}


void Phonebook::print_table(void)
{
    std::cout << "=============================" << std::endl;
    std::cout << " index|first name| last name|  nickname" << std::endl;
    for (int i = 1; i < index_global; i++)
    {
        std::cout << " " << contact[i].index << "|";
        if (contact[i].first_name.length() > 10)
            print_parse(contact[i].first_name);
        else
            std::cout << contact[i].first_name << "|";
        if (contact[i].last_name.length() > 10)
            print_parse(contact[i].last_name);
        else 
            std::cout << contact[i].last_name << "|";
        if (contact[i].nickname.length() > 10)
            print_parse(contact[i].nickname);
        else
            std::cout << contact[i].nickname << std::endl;
    }
    std::cout << "=============================" << std::endl;
    return ;
}

void Phonebook::search_contact(void)
{
    int index_input = 0;
    int i = 0;
    if (this->index_global == 1)
    {
        std::cout << "No contacts" << std::endl;
        return ;
    }
    this->print_table();
    std::cout << "Enter an index..." << std::endl;
    std::cin >> index_input;
    if (!index_input)
        return;
    if (index_input > 8)
    {
        std::cout << "Only 8 contacts !" << std::endl;
        return ;
    }
    std::cout << index_input << std::endl;
    while (i < MAX_CONTACTS)
    {
        if (this->contact[i].index == index_input)
        {
            std::cout << "first_name : " << this->contact[i].first_name << std::endl;
            std::cout << "last_name : " << this->contact[i].last_name << std::endl;
            std::cout << "last_name : " << this->contact[i].nickname << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "Contact not found" << std::endl;
    return ;
}

void Contact::add_contact(void)
{
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

void Phonebook::check_input(std::string input)
{
    if (input == "ADD")
    {
        this->contact[index_global].add_contact();
        index_global++;
        if (index_global > MAX_CONTACTS)
            index_global--; 
    }
    else if (input == "SEARCH")
        this->search_contact();
    else
        std::cout << "Invalid input" << std::endl;
    return ;
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
        phonebook.check_input(option);
    }
    return (0);
}
