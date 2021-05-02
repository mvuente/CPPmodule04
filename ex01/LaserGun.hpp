
#ifndef LASERGUN_HPP
#define LASERGUN_HPP

#include <iostream>
#include "AWeapon.hpp"

class LaserGun : virtual public AWeapon
{
private:
	std::string	_attack_sound;
public:
	LaserGun(void);
	LaserGun(const LaserGun &cpLaserGun);
	LaserGun			&operator=(const LaserGun &cpLaserGun);
	virtual ~LaserGun();
	virtual void 	attack() const;
};

#endif
