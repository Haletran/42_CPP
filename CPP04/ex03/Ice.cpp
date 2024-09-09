#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Materia construtor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Materia destructor called" << std::endl;
}


Ice::Ice(const Ice &src) : AMateria(src) {}

Ice &Ice::operator=(const Ice &cpy)
{
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

Ice *Ice::clone() const
{
    return(new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
