
#include "Enemy.hpp"

Enemy::Enemy(int HP, std::string const & type)
{
	this->_HP = HP;
	this->_type = type;
	return ;
}

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(const Enemy &cpEnemy)
{
	*this = cpEnemy;
	return ;
}

Enemy&			Enemy::operator=(const Enemy &cpEnemy)
{
	if (this != &cpEnemy)
	{
		this->_type = cpEnemy._type;
		this->_HP = cpEnemy._HP;
	}
	return (*this);
}

Enemy::~Enemy()
{
	return ;
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg >= 0)
	{
		this->_HP -= dmg;
		if (this->_HP <= 0)
			this->_HP = 0;
	}
	return ;
}

std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_HP);
}

void 			Enemy::setHP(int HP)
{
	this->_HP = HP;
	return ;
}

void			Enemy::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::ostream&	operator<<(std::ostream &out, const Enemy &enemy)
{
	out << enemy.getType() << enemy.getHP() << std::endl;
	return (out);
}