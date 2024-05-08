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
        std::string get_first_name() { return (first_name); };
        std::string get_last_name() { return (last_name); };
        std::string get_nickname() { return (nickname); };
        void set_index(int& ind) {index = ind; };
        void set_first_name(std::string& f_name) { first_name = f_name; }
        void set_last_name(std::string& l_name) { last_name = l_name; }
        void set_nickname(std::string& nick_n) { nickname = nick_n; }
        void set_phone_number(std::string& phone_n) { phone_number = phone_n; }
        void set_secret(std::string& secret) { darkest_secret = secret; }
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