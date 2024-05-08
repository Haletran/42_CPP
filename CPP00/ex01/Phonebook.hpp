/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:37:34 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/08 14:13:35 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8
#define MAX_LENGTH 21
#define MAX_SIZE 10

#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

#include "Contact.class.hpp"
#include <stdlib.h>
#include <cstring>
#include <iostream>

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void check_input(std::string input);
        void search_contact(void);
        void print_table(void);
        void print_parse(std::string str);
    private:
        Contact	contact;
};

#endif