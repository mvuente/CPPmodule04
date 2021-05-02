
#include "LaserGun.hpp"

LaserGun::LaserGun() : AWeapon("Laser Gun", 10, 30)
{
	this->_attack_sound = "* ssshow ssshow *";
	return ;
}

LaserGun::LaserGun(const LaserGun &cpLaserGun)
{
	*this = cpLaserGun;
	return ;
}

LaserGun		&LaserGun::operator=(const LaserGun &cpLaserGun)
{
	if (this != &cpLaserGun)
		this->_attack_sound = cpLaserGun._attack_sound;
	return (*this);
}

void			LaserGun::attack() const
{
	std::cout << this->_attack_sound << std::endl;
	return ;
}

LaserGun::~LaserGun(void)
{
	return ;
}
