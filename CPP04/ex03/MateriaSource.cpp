#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource was constructed" << std::endl;
    for (int i = 0; i < 3; i++)
        this->_stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource was destroyed" << std::endl;
    for (int i = 0; i < 3; i++)
        if (this->_stock[i])
            delete this->_stock[i];
}

MateriaSource ::MateriaSource(const MateriaSource& src)
{
    for (int i = 0; i < 3; i++)
    {
        if (src._stock[i])
            this->_stock[i] = src._stock[i]->clone();
        else
            this->_stock[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& cpy)
{
    if (this != &cpy)
    {
        for (int i = 0; i < 3; i++)
        {
            if (cpy._stock[i])
                this->_stock[i] = cpy._stock[i]->clone();
            else
                this->_stock[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    std::cout << "Learning a materia" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        if (!this->_stock[i])
        {
            this->_stock[i] = m;
            return;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    std::cout << "Creating Materia of type " << type << std::endl;
   	for (int i = 0; i < 3; i++)
	{
		if (this->_stock[i] && this->_stock[i]->getType() == type)
			return (this->_stock[i]->clone());
	}
	return (0);
}
