
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
private:
	std::string	_attack_sound;
public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle &cpPlasmaRifle);
	PlasmaRifle			&operator=(const PlasmaRifle &cpPlasmaRifle);
	virtual ~PlasmaRifle();
	virtual void 	attack() const;
};

#endif
