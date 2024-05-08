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
        void add_contact(int index_global);
        std::string get_first_name() { return (first_name); };
        std::string get_last_name() { return (last_name); };
        std::string get_nickname() { return (nickname); };
    private:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

void search_contact(Contact Contact);

#endif