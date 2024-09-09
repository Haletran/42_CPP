#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria *_inventory[4];
        std::string _name;
        Character();
    public:
        // FUNCTIONS
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        std::string const & getName() const;

        // COPLIAN
        Character(std::string const & name);
        Character(const Character &src);
        Character &operator=(const Character &cpy);
        virtual ~Character();
};



#endif
