/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:48 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 13:00:49 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy) { *this = cpy; }

WrongCat &WrongCat::operator=(const WrongCat &src) {
  if (this != &src)
    this->type = src.getType();
  return (*this);
}

void WrongCat::makeSound() const {
  std::cout << "* WrongCat noise *" << std::endl;
}
