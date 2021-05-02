
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	this->_attack_sound = "* piouuu piouuu piouuu *";
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cpPlasmaRifle)
{
	*this = cpPlasmaRifle;
	return ;
}

PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle &cpPlasmaRifle)
{
	if (this != &cpPlasmaRifle)
		this->_attack_sound = cpPlasmaRifle._attack_sound;
	return (*this);
}

void			PlasmaRifle::attack() const
{
	std::cout << this->_attack_sound << std::endl;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}