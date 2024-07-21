/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:27:07 by bapasqui          #+#    #+#             */
/*   Updated: 2024/07/21 11:38:23 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::get_first_name()
{
    return (first_name);
}

std::string Contact::get_nickname()
{
    return (nickname);
}

std::string Contact::get_last_name()
{
    return (last_name);
}

void Contact::set_first_name(std::string& f_name)
{
    first_name = f_name;
}

void Contact::set_last_name(std::string& l_name)
{
    last_name = l_name;
}

void Contact::set_nickname(std::string& nick_n)
{
    nickname = nick_n;
}

void Contact::set_phone_number(std::string& phone_n)
{
    phone_number = phone_n;
}

void Contact::set_secret(std::string& secret)
{
    darkest_secret = secret;
}

void Contact::set_index(int& ind)
{
    index = ind;
}