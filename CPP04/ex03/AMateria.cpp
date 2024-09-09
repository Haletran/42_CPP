#include "AMateria.hpp"
#include "Colors.hpp"


AMateria::~AMateria()
{
    std::cout << "AMateria of type";
    if (type == "ice")
        std::cout << SKY500 " Ice " RESET << "was destroyed" << std::endl;
    else if (type == "cure")
        std::cout << YELLOW500 " Cure " RESET << "was destroyed" << std::endl;
    else
        std::cout << RED300 "Unknown" RESET << "was destroyed" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria of type";
    if (type == "ice")
        std::cout << SKY500 " Ice " RESET << "created" << std::endl;
    else if (type == "cure")
        std::cout << YELLOW500 " Cure " RESET << "created" << std::endl;
    else
        std::cout << RED300 " Unknown " RESET << "created" << std::endl;
    this->type = type; // i know i can put it next to the function
}

AMateria::AMateria(const AMateria &src)
{
    this->type = src.type;
}

AMateria& AMateria::operator=(const AMateria& cpy)
{
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

std::string const &AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Using AMateria on " << target.getName() << std::endl;
}
