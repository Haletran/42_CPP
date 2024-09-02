/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:15:37 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:22:26 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.cpp"

class WrongCat : public WrongAnimal {
    public: 
        WrongCat();
        WrongCat(const WrongCat& cpy);
        WrongCat& operator=(const WrongCat& src);
        ~WrongCat();
};


#endif