
#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
private:
	std::string	_name;
	int 		_apcost;
	int 		_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(void);
	AWeapon(const AWeapon &cpAWeapon);
	AWeapon			&operator=(const AWeapon &cpAWeapon);
	virtual ~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void	attack() const = 0;
};

#endif
