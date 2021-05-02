
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	this->_xp = 0;
}

AMateria::AMateria()
{}

AMateria::AMateria(const AMateria &cpAMateria)
{
	*this = cpAMateria;
}

AMateria::~AMateria()
{}

AMateria&			AMateria::operator=(const AMateria &cpAMateria)
{
	if (this != &cpAMateria)
	{
		this->_xp = cpAMateria._xp;
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int 		AMateria::getXP() const
{
	return (this-> _xp);
}

void 				AMateria::increaseXP()
{
	this->_xp += 10;
	return ;
}

void 				AMateria::use(ICharacter& target)
{
	std::cout << "Abstract materia influences " << target.getName() << " ." << std::endl;
	this->increaseXP();
	std::cout << "materia has " << this->getXP() << " points of experience." << std::endl;
	return ;
}