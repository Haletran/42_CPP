/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:15:34 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:16:36 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal& operator=(const WrongAnimal& src);
        ~WrongAnimal();
    protected:
        std::string type;
    private:
        WrongAnimal();
};

#endif