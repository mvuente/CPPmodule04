
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int 		_AP;
	AWeapon		*_weapon;
public:
	Character(std::string const & name);
	Character(const Character &cpCharacter);
	Character	&operator=(const Character &cpCharacter);
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);
	std::string getName() const;
	int 		getAP() const;
	std::string getWeapon() const;
};

std::ostream&	operator<<(std::ostream &out, const Character &character);

#endif
