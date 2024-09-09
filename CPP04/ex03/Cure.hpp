#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &src);
        Cure &operator=(const Cure &cpy);
        Cure *clone() const;
        void use(ICharacter &target);
        virtual ~Cure();
};


#endif
