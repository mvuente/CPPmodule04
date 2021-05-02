
#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
private:
	std::string	_attack_sound;
public:
	PowerFist(void);
	PowerFist(const PowerFist &cpPowerFist);
	PowerFist			&operator=(const PowerFist &cpPowerFist);
	virtual ~PowerFist();
	virtual void 	attack() const;
};
#endif
