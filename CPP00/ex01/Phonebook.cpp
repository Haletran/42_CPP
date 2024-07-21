/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:18:59 by codespace         #+#    #+#             */
/*   Updated: 2024/07/21 12:34:31 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->index_global = 0;
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

void Phonebook::print_list(void)
{
    std::cout << "=================================================" << std::endl;
    std::cout << std::setw(10) << "index" << " | " << std::setw(10) << "first_name" << " | " << std::setw(10) << "last_name" << " | " << std::setw(10) << "nickname"<< std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    if (index_global >= 7)
        index_global--;
    for(int i = 0; i < index_global; i++)
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
    if (index_global == 0)
    {
        std::cout << "No contacts in Phonebook" << std::endl;
        return ;
    }
    print_list();
    std::cout << "Enter the index : ";
    int input;
    std::cin >> input;
    if (std::cin.eof()) {std::cout << std::endl; return;}
    if (!input || (input < 1 || input > 8))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    std::cout << "first_name : " << contact[input].get_first_name() << std::endl;
    std::cout << "last_name : " << contact[input].get_last_name() << std::endl;
    std::cout << "nickname : " << contact[input].get_nickname() << std::endl;
    return ;
}

void Phonebook::add_contact(int index_global)
{
    std::cin.ignore();
    if (index_global >= 8)
    {
        std::cout << "im here" << std::endl;
        index_global--;
    }
    std::string f_name, l_name, nick_n, phone_n, secret;
    contact[index_global].set_index(index_global);
    std::cout << "=======================" << std::endl;
    std::cout << "Enter first_name : ";
    std::getline(std::cin, f_name);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_first_name(f_name);
    std::cout << "Enter last_name : ";
    std::getline(std::cin, l_name);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_last_name(l_name);
    std::cout << "Enter nickname : ";
    std::getline(std::cin, nick_n);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_nickname(nick_n);
    std::cout << "Enter phone_number : ";
    std::getline(std::cin, phone_n);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_phone_number(phone_n);
    std::cout << "Enter darkest_secret : ";
    std::getline(std::cin, secret);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global].set_secret(secret);
    std::cout << "=======================" << std::endl;
    
    std::cout << "\033[32m" << "Contact successfully added :)" << "\033[0m" << std::endl;
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