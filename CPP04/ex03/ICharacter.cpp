#include "ICharacter.hpp"
#include "AMateria.hpp"


ICharacter::ICharacter(std::string& name) : _name(name) {}

ICharacter::~ICharacter() {
    std::cout << "ICharacter destroyed" << std::endl;
}

ICharacter::ICharacter(const ICharacter& cpy)
{
    *this = cpy;
}

ICharacter& ICharacter::operator=(const ICharacter& src)
{
    if (this != &src)
    {
        this->_name = src._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (src.inventory[i])
                this->inventory[i] = src.inventory[i];
            else
                this->inventory[i] = NULL;
        }
    }
    return (*this);
}


std::string const & ICharacter::getName() const {
    return (this->_name);
}

void ICharacter::use(int idx, ICharacter& target)
{
    inventory[idx]->use(target);
}


void ICharacter::equip(AMateria* m)
{


}


void ICharacter::unequip(int idx)
{
    if (this->inventory[idx])
        std::cout << "Unequip" << this->inventory[idx]->getType() << std::endl;
    // Stocking elsewhere because cannot be deleted until the end of the program
}
