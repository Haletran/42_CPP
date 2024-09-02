/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:14:40 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:14:48 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& cpy);
        Animal& operator=(const Animal& src);
        virtual ~Animal();
        std::string getType() const;
        void setType(std::string &type);
        virtual void makeSound() const;
    protected:
        std::string type;
};

#endif
