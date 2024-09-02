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
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* animals[100];
    const WrongAnimal* test = new WrongCat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "this is a " << j->getType() << " " << std::endl;
    std::cout << "this is a " << i->getType() << " " << std::endl;
    std::cout << "this is a " << test->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }


    for (int i = 0; i < 100; i++) {
        std::cout << "this is a " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        delete animals[i];
    }

    delete i;
    delete j;
    delete test;
    return (0);
}
