
#include "Character.hpp"

Character::Character(const std::string &name)
{
	this->_name = name;
	this->_AP = 40;
	this->_weapon = NULL;
	return ;
}

Character::Character(const Character &cpCharacter)
{
	*this = cpCharacter;
	return ;
}

Character&		Character::operator=(const Character &cpCharacter)
{
	if (this != &cpCharacter)
	{
		this->_name = cpCharacter._name;
		this->_AP = cpCharacter._AP;
		this->_weapon = cpCharacter._weapon;
	}
	return (*this);
}

void 			Character::recoverAP(void)
{
	if (this->_AP > 30)
	{
		this->_AP = 40;
		std::cout << "APs are at maximum level!"<< std::endl;
		return ;
	}
	this->_AP += 10;
	return ;
}

void 			Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
	return ;
}

void 			Character::attack(Enemy* enemy)
{
	if (this->_weapon && enemy->getHP())
	{
		if (this->_AP >= this->_weapon->getAPCost())
		{
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			this->_AP -= this->_weapon->getAPCost();
			enemy->takeDamage(this->_weapon->getDamage());
			if (!enemy->getHP())
				delete enemy;
		}
		else
			std::cout << "kk kkk... there is no APs to attack." << std::endl;
	}
	return ;
}

std::string 	Character::getName() const
{
	return _name;
}

int 			Character::getAP() const
{
	return (this->_AP);
}

std::string 	Character::getWeapon() const
{
	if (!this->_weapon)
		return (" is unarmed");
	return (" wields a " + this->_weapon->getName());
}

Character::~Character()
{
	return ;
}

std::ostream&	operator<<(std::ostream &out, const Character &character)
{
	out << character.getName() << " has " << character.getAP() << " AP and" << character.getWeapon() << std::endl;

	return (out);
}
