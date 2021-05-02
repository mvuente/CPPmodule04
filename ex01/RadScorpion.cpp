
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	this->setHP(80);
	this->setType("RadScorpion");
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion &cpRadScorpion)
{
	*this = cpRadScorpion;
	return ;
}

RadScorpion&			RadScorpion::operator=(const RadScorpion &cpRadScorpion)
{
	if (this != &cpRadScorpion)
		this->_death = cpRadScorpion._death;
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
