#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class ICharacter;
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(const Character& src);
        Character& operator=(const Character& cpy);
        ~Character();

        std::string const & getName() const override;
        void equip(AMateria* m) override;
        void unequip(int idx) override;
        void use(int idx, ICharacter& target) override;

    private:
        AMateria* inventory[4];
        std::string _name;
    private:
        Character();
};



#endif
