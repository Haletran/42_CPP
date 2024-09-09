#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) // might need to had an if statement
        delete this->_stock[i];
}

MateriaSource ::MateriaSource(const MateriaSource& src)
{
    *this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& cpy)
{
    if (this != &cpy)
    {
        for (int i = 0; i < 4; i++)
            this->_stock[i] = cpy._stock[i];
    }
    return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_stock[i])
        {
            this->_stock[i] = m;
            break;
        }
    }

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
   	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i] && this->_stock[i]->getType() == type)
			return (this->_stock[i]->clone());
	}
	return (0);
}
