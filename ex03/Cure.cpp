
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure &cpCure)
{
	*this = cpCure;
}
Cure			&Cure::operator=(const Cure &cpCure)
{
	if (this != &cpCure)
		return (*this);
	return (*this);
}

Cure::~Cure()
{}

AMateria* 	Cure::clone() const
{
	AMateria* cloned_materia = new Cure;
	*cloned_materia = *this;
	return (cloned_materia);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->increaseXP();
	std::cout << "materia has " << this->getXP() << " points of experience." << std::endl;
	return ;
}