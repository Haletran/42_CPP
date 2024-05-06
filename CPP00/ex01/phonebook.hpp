/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:37:34 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/06 20:42:34 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
# define MAX_LENGTH 21
# define MAX_SIZE 10

# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class user 
{
    public:
        int index;
        void   add_info(void);
        void   search(char *command);
        
};

class contact
{
    public:
        char first_name[MAX_CONTACTS][MAX_LENGTH];
        char last_name[MAX_CONTACTS][MAX_LENGTH];
        char nickname[MAX_CONTACTS][MAX_LENGTH];
        char phone_number[MAX_CONTACTS][MAX_LENGTH];
        char darkest_secret[MAX_CONTACTS][MAX_LENGTH];
};

void   Phonebook(void);

#endif
