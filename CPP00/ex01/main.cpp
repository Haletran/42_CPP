/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/08 15:05:39 by codespace        ###   ########.fr       */
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

void Phonebook::print_list(void)
{
    std::cout << "=================================================" << std::endl;
    std::cout << std::setw(10) << "index" << " | " << std::setw(10) << "first_name" << " | " << std::setw(10) << "last_name" << " | " << std::setw(10) << "nickname"<< std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    for(int i = 1; i < index_global; i++)
    {
        std::string first_name = contact[i].get_first_name();
        std::string last_name = contact[i].get_last_name();
        std::string nickname = contact[i].get_nickname();

        if (first_name.length() > 10)
            first_name = first_name.substr(0, 9) + ".";
        if (last_name.length() > 10)
            last_name = last_name.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << " | " << std::setw(10) << first_name << " | " << std::setw(10) << last_name << " | " << std::setw(10) << nickname << std::endl;
    }
    std::cout << "=================================================" << std::endl;
}


void Phonebook::search_contact(void)
{
    if (index_global == 1)
    {
        std::cout << "No contacts in Phonebook" << std::endl;
        return ;
    }
    print_list();
    std::cout << "Enter the index : ";
    int input;
    std::cin >> input;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    std::cout << "first_name : " << contact[input].get_first_name() << std::endl;
    std::cout << "last_name : " << contact[input].get_last_name() << std::endl;
    std::cout << "nickname : " << contact[input].get_nickname() << std::endl;
    return ;
}

void Phonebook::add_contact(int index_global)
{
    std::string f_name, l_name, nick_n, phone_n, secret;
    contact[index_global].set_index(index_global);
    std::cout << "=======================" << std::endl;
    std::cout << "Enter first_name : ";
    std::cin >> f_name;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_first_name(f_name);
    std::cout << "Enter last_name : ";
    std::cin >> l_name;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_last_name(l_name);
    std::cout << "Enter nickname : ";
    std::cin >> nick_n;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_nickname(nick_n);
    std::cout << "Enter phone_number : ";
    std::cin >> phone_n;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_phone_number(phone_n);
    std::cout << "Enter darkest_secret : ";
    std::cin >> secret;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_secret(secret);
    std::cout << "=======================" << std::endl;
}

void Phonebook::check_option(std::string option)
{
    if (option == "ADD")
    {
        add_contact(index_global);
        index_global++;
    }
    else if (option == "SEARCH")
        search_contact();
    else
        std::cout << "Invalid option." << std::endl;
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
        if (std::cin.eof()) {std::cout << std::endl; break;}
        if (option == "EXIT" || option.empty()) {break;}
        else {phonebook.check_option(option);}
    }
    return (0);
}
