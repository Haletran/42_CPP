#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class AMateria;
#include "AMateria.hpp"

class IMateriaSource {
    public:
        IMateriaSource(const IMateriaSource& src);
        IMateriaSource operator=(const IMateriaSource& cpy);
        virtual ~IMateriaSource();

        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        IMateriaSource();
};

#endif
