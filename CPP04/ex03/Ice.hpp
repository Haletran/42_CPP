#ifndef ICE_HPP
#define ICE_HPP

class AMateria;
#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(const Ice& src);
    Ice& operator=(const Ice& cpy);
    virtual ~Ice();

    AMateria* clone() const override;
    void use(ICharacter& target) override;
};

#endif
