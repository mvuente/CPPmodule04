
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_skill = new AMateria*[4];
	for (int i = 0; i <= 3; ++i)
		_skill[i] = 0;
}
MateriaSource::MateriaSource(const MateriaSource &cpMateriaSource)
{
	*this = cpMateriaSource;
}
MateriaSource&		MateriaSource::operator=(const MateriaSource &cpMateriaSource)
{
	if (this != &cpMateriaSource)
	{
		for (int i = 0; i <= 3; ++i)
		{
			if (this->_skill[i])
				delete this->_skill[i];
			this->_skill[i] = cpMateriaSource._skill[i]->clone();
		}
	}
	return (*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i <= 3; ++i)
	{
		if (this->_skill[i])
			delete this->_skill[i];
	}
	delete this->_skill;
	std::cout << "materia source doesn't exist anymore." << std::endl;
}

unsigned int		MateriaSource::checkFreeSkill()
{
	int i = 0;
	for (i = 0; i <= 3; ++i)
	{
		if (!this->_skill[i])
			return (i);
	}
	return (i);
}

void				MateriaSource::learnMateria(AMateria* m)
{
	unsigned int idx;
	if (!m)
	{
		std::cout << "there is nothing to learn" << std::endl;
		return ;
	}
	else if ((idx = this->checkFreeSkill()) == 4)
	{
		std::cout << "All skills are kept by materia. No new learnings." << std::endl;
		return ;
	}
	this->_skill[idx] = m->clone();
	std::cout << "Materia " << m->getType() << " has been learned by skill number " << idx << "." << std::endl;
	return ;
}

AMateria*			MateriaSource::createMateria(std::string const & type)
{
	if (!this->_skill[0])
		std::cout << "I can't create Materia, since I learned nothing." << std::endl;
	for (int i = 0; i <= 3; ++i)
	{
		if (this->_skill[i]->getType() == type)
			return (this->_skill[i]->clone());
	}
	std::cout << "This type of materia is unknown." << std::endl;
	return (0);
}