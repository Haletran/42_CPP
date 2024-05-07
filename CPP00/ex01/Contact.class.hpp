/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:37:33 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/07 20:38:55 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Phonebook.hpp"
# include <cstring>
# include <iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        
        int index;
        void add_contact(void);
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

void search_contact(Contact Contact);

#endif