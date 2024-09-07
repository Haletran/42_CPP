#ifndef CURE_HPP
#define CURE_HPP

class AMateria;
#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure(const Cure& src);
        Cure operator=(const Cure& cpy);
        virtual ~Cure();
    private:
        Cure();
};

#endif
