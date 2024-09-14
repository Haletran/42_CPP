#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Materia constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Materia destructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src) {}

Cure &Cure::operator=(const Cure &cpy)
{
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
