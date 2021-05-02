
#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "Victim is wrong!!!" << std::endl;
	return ;
}

Victim::Victim(std::string name) : _name (name)
{
	this->_result_of_magic = " cute little sheep!";
	std::cout << "Some random victim called " << this->_name <<  " just appeared!" << std::endl;
	return ;
}

Victim::Victim(const Victim &cpVictim)
{
	*this = cpVictim;
	return ;
}

Victim		&Victim::operator=(const Victim &cpVictim)
{
	if (this != &cpVictim)
	{
		this->_name = cpVictim._name;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Victim &victim)
{
	out << "I am " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}

std::string 	Victim::getName(void) const
{
	return (this->_name);
}

void 			Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a" << this->_result_of_magic << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}