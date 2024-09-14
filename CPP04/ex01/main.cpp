/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:12:33 by bapasqui          #+#    #+#             */
/*   Updated: 2024/09/02 12:20:06 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  Animal *animals[100];
  const Animal *meta = new Animal();
  const WrongAnimal *test = new WrongCat();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  const Animal *k;

  k = j; // deep copy check
  std::cout << "COPY this is a " << k->getType() << " " << std::endl;
  std::cout << "this is a " << meta->getType() << " " << std::endl;
  std::cout << "this is a " << j->getType() << " " << std::endl;
  std::cout << "this is a " << i->getType() << " " << std::endl;
  std::cout << "this is a " << test->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  test->makeSound();

  std::cout << "[ LOOP CREATION / DESTRUCTION ]" << std::endl;
  for (int i = 0; i < 10; i++) {
    if (i < 5)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }

  for (int i = 0; i < 10; i++) {
    std::cout << "this is a " << animals[i]->getType() << std::endl;
    std::cout << "It makes ";
    animals[i]->makeSound();
    delete animals[i];
  }
  std::cout << "[ END OF LOOP ]" << std::endl;

  // CORRECTION TEST
  Dog basic;
  { Dog tmp = basic; }
  basic.getBrain();

  delete i;
  delete j;
  delete test;
  delete meta;
  return (0);
}
