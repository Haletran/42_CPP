#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "Colors.hpp"

#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        // FUNCTIONS
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        // COPLIAN
        AMateria(std::string const & type);
       	AMateria(AMateria const &src);
        AMateria &operator=(const AMateria &cpy);
        virtual ~AMateria();
};



#endif
