/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:18:59 by codespace         #+#    #+#             */
/*   Updated: 2024/08/18 16:47:45 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->index_global = 0;
    this->index_tmp = 0;
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
    for(int i = 0; i < 8; i++)
    {
        std::string first_name = contact[i].get_first_name();
        std::string last_name = contact[i].get_last_name();
        std::string nickname = contact[i].get_nickname();

        if (first_name.length() > 9)
            first_name = first_name.substr(0, 9) + ".";
        if (last_name.length() > 9)
            last_name = last_name.substr(0, 9) + ".";
        if (nickname.length() > 9)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << " | " << std::setw(10) << first_name << " | " << std::setw(10) << last_name << " | " << std::setw(10) << nickname << std::endl;
    }
    std::cout << "=================================================" << std::endl;
}

void Phonebook::search_contact(void)
{
    int i = 0;
    if (index_global == 0)
    {
        std::cout << "No contacts in Phonebook" << std::endl;
        return ;
    }
    print_list();
    std::cout << "Enter the index : ";
    std::string test;
    getline(std::cin, test);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    while (test[i])
    {
        if (!std::isdigit(test[i]))
        {
            std::cout << "Invalid index" << std::endl;
            return ;
        }
        i++;
    }
    if (test.length() > 1)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    int input = std::atoi(test.c_str());
    if (input != 0 && input != 1 && input != 2 && input != 3 && input != 4 && input != 5 && input != 6 && input != 7)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    if (input >= index_tmp)
    {
        std::cout << "No contact at this index" << std::endl;
        return ;
    }
    if (input == 0 || input == 1 || input == 2 || input == 3 || input == 4 || input == 5 || input == 6 || input == 7)
    {
        std::cout << "first_name : " << contact[input].get_first_name() << std::endl;
        std::cout << "last_name : " << contact[input].get_last_name() << std::endl;
        std::cout << "nickname : " << contact[input].get_nickname() << std::endl;
        std::cout << "phone_number : " << contact[input].get_phone_number() << std::endl;
        std::cout << "darkest_secret :" << contact[input].get_secret() << std::endl;
    }
    return ;
}

void Phonebook::add_contact(void)
{
    std::string f_name, l_name, nick_n, phone_n, secret;
    if (index_global >= 8)
    {
        std::cout << MAGENTA << "Phonebook is full." << RESET << std::endl;
        std::cout << MAGENTA << "Deleting oldest contact." << RESET <<  std::endl;
        index_global = 0;
    }
    else if (index_tmp >= 8)
    {
        std::cout << MAGENTA << "Phonebook is full." << RESET << std::endl;
        std::cout << MAGENTA << "Deleting oldest contact." << RESET <<  std::endl;
    }
    contact[index_global].set_index(index_global);
    std::cout << "=======================" << std::endl;
    std::cout << "Enter first_name : ";
    std::getline(std::cin, f_name);
    if (std::cin.eof()) {std::cout << std::endl; return;}
    contact[index_global ].set_first_name(f_name);
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
        add_contact();
        if (index_global < 8)
        {
            index_global++;
            index_tmp++;
        }
    }
    else if (option == "SEARCH")
        search_contact();
    else
        std::cout << "Invalid option." << std::endl;
    return ;
}