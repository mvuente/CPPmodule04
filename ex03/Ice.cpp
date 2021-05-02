
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(const Ice &cpIce)
{
	*this = cpIce;
}
Ice&		Ice::operator=(const Ice &cpIce)
{
	if (this != &cpIce)
		return (*this);
	return (*this);
}

Ice::~Ice()
{}

AMateria* 	Ice::clone() const
{
	AMateria* cloned_materia = new Ice;
	*cloned_materia = *this;
	return (cloned_materia);
}

void		Ice::use(ICharacter& target)
{

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->increaseXP();
	std::cout << "materia has " << this->getXP() << " points of experience." << std::endl;
	return ;
}