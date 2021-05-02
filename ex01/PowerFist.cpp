
#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	this->_attack_sound = "* pschhh... SBAM! *";
	return ;
}

PowerFist::PowerFist(const PowerFist &cpPowerFist)
{
	*this = cpPowerFist;
	return ;
}

PowerFist		&PowerFist::operator=(const PowerFist &cpPowerFist)
{
	if (this != &cpPowerFist)
		this->_attack_sound = cpPowerFist._attack_sound;
	return (*this);
}

void			PowerFist::attack() const
{
	std::cout << this->_attack_sound << std::endl;
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}
