/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:37:34 by bapasqui          #+#    #+#             */
/*   Updated: 2024/07/21 11:38:23 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
#define MAX_CONTACTS 8
#define SUCCESS 0
#define ERROR 1

#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <iomanip>


class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        int index_global;
        void check_option(std::string option);
        void search_contact(void);
        void print_list(void);
        void add_contact(int index_global);
    private:
        Contact contact[MAX_CONTACTS];
        
};

#endif