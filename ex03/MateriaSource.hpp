
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria**		_skill;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &cpMateriaSource);
	MateriaSource&		operator=(const MateriaSource &cpMateriaSource);
	~MateriaSource();
	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);
	unsigned int		checkFreeSkill();
};

#endif
