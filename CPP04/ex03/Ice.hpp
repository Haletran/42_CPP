#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice(const Ice& src);
        Ice operator=(const Ice& cpy);
        virtual ~Ice();
    private:
        Ice();
};

#endif
