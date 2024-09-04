#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::~AMateria()
{
    std::cout << "Destructor" << std::endl;
}

AMateria::AMateria(const AMateria& cpy)
{
    *this = cpy;
}

AMateria& AMateria::operator=(const AMateria& src)
{
    if (this != &src)
        this->_type = src._type;
    return(*this);
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

AMateria* AMateria::clone() const
{
    return new AMateria(*this);
}

void AMateria::use(ICharacter& target)
{
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at" << target.getName() << std::endl;
    else if (this->_type == "cure")
        std::cout << "* heals" << target.getName() << std::endl;
}
