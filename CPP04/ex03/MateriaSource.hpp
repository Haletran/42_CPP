#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_stock[4];
    public:
        // FUNCTIONS
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

        // COPLIAN
        MateriaSource();
        MateriaSource(const MateriaSource& src);
        MateriaSource &operator=(const MateriaSource& cpy);
        virtual ~MateriaSource();
};


#endif
