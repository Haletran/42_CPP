#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    private:
        AMateria();
    protected:
        std::string _type;
    public:
        // COPLIAN
        AMateria(std::string const & type);
        AMateria(const AMateria& cpy);
        AMateria& operator=(const AMateria& src);
        virtual ~AMateria();

        // FUNCTIONS
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
