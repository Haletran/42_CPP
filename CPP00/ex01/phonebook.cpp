/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:38:00 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/06 20:45:12 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <cstring>

void user::search(char *command)
{
    (void)command;
    std::cout << "=============================" << std::endl;
    std::cout << "Index:" << index << std::endl;
    std::cout << "First Name: " << first_name[index] << std::endl;
    std::cout << "Last Name: " << last_name[index] << std::endl;
    std::cout << "Nickname: " << nickname[index] << std::endl;
    std::cout << "=============================" << std::endl;
    return ;
}


void user::add_info(contact contact)
{
    
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    if (index >= MAX_CONTACTS)
    {
        std::cout << "Phonebook is full" << std::endl;
        return ;
    }
    std::cout << "=============================" << std::endl;
    std::cout << "Please enter the first name: ";
    std::cin >> first_name;
    std::cout << "Please enter the last name: ";
    std::cin >> last_name;
    std::cout << "Please enter the nickname: ";
    std::cin >> nickname;
    std::cout << "Please enter the phone number: ";
    std::cin >> phone_number;
    std::cout << "Please enter the darkest secret: ";
    std::cin >> darkest_secret;
    std::cout << "=============================" << std::endl;
    contact.first_name = first_name;
    contact.last_name = last_name;
    contact.nickname = nickname;
    contact.phone_number = phone_number;
    contact.darkest_secret = darkest_secret;
    return ;
}

int check_command(const char *command, user user, contact contact)
{
    switch (command[0])
    {
        case 'A':
            if (strcmp(command, "ADD") == 0)
                user.add_info(contact);
            break ;
        case 'S':
            if (strcmp(command, "SEARCH") == 0)
                user.search((char *)command);
            break ;
        default:
            std::cout << "Invalid command" << std::endl;
            break ;
    }
    return (0);
}

void Phonebook(void)
{
    user user;
    contact contact;
    user.index = 0;
    std::cout << "Welcome to the Phonebook!" << std::endl;
    while (1)
    {
        std::cout << "Please enter a command: ";
        std::string command;
        std::cin >> command;
        if (command == "EXIT" || command.empty())
            break ;
        check_command(command.c_str(), user, contact);
    }
}

int main(void)
{
    Phonebook();
    return (0);
}
