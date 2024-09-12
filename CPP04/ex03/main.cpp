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

#include "AMateria.hpp"
#include "Character.hpp"
#include "Colors.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{

    std::cout << BG_CYAN500"MATERIA SOURCE" RESET << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << BG_CYAN500 "CHARACTER MATERIA" RESET << std::endl;
    Character* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->get_inventory();
    me->unequip(1);

    std::cout << BG_CYAN500"ICHARACTER TESTING" RESET << std::endl;
    ICharacter* test = new Character("test");
    delete test;
    test = me;
    test->use(0, *me);

    std::cout << BG_CYAN500"TESTING CHARACTER" RESET << std::endl;
    Character* me2 = new Character(*me);
    *me2 = *me;
    me->get_inventory();
    me2->use(0, *test);
    test->use(0, *test);
    test->use(2, *me);
    test->use(5, *me);
    ICharacter* bob = new Character("bob");
    test = bob;
    me->use(0, *bob);
    me->use(1, *bob);
    me2->get_ground();

    std::cout << BG_CYAN500"DESTRUCTOR" RESET << std::endl;
    delete me2;
    delete me;
    delete bob;
    delete src;
    return 0;
}
