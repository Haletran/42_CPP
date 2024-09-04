#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter {
    public:
        ICharacter(std::string &name);
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
        ICharacter(const ICharacter& src);
        ICharacter& operator=(const ICharacter& cpy);
        virtual ~ICharacter();
    protected:
        AMateria *inventory[4];
        std::string _name;
    private:
        ICharacter();
};


#endif
