#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const & name)
{
    this->_name = name;
    std::cout << this->_name << " has appeared" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
    *this = src;
}

Character &Character::operator=(const Character &cpy)
{
    if (this != &cpy)
    {
        this->_name = cpy._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = cpy._inventory[i];
    }
    return (*this);
}

Character::~Character()
{
    std::cout << this->_name << " has been destroyed" << std::endl;
    for (int i = 0; i < 4; i++) // maybe add check if there is a case to delete
        delete this->_inventory[i];
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 5)
        {
            delete m;
            return;
        }
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    // need to keep ground inventory, but limit how much the player can drop
    // check for < 0 or > 4
    if (this->_inventory[idx])
    {
        std::cout << "Unequipping materia at index " << idx << "in the inventory" << std::endl;
        this->_inventory[idx] = 0;
    }
    else
        std::cout << "No materia in this slot" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->_inventory[idx]) // check for < 0 or > 4
        this->_inventory[idx]->use(target);
    else
        std::cout << "No materia in this slot to use" << std::endl;
}

std::string const & Character::getName() const
{
    return (this->_name);
}
