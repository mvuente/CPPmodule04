
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(const AWeapon &cpAWeapon)
{
	*this = cpAWeapon;
	return ;
}

AWeapon		&AWeapon::operator=(const AWeapon &cpAWeapon)
{
	if (this != &cpAWeapon)
	{
		this->_name = cpAWeapon._name;
		this->_damage = cpAWeapon._damage;
		this->_apcost = cpAWeapon._apcost;
	}
	return (*this);
}

std::string AWeapon::getName() const
{
	return (this->_name);
}

int			AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int 		AWeapon::getDamage() const
{
	return (this->_damage);
}

AWeapon::~AWeapon(void)
{
	return ;
}
