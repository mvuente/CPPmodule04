
#include "WhiteSnake.hpp"

WhiteSnake::WhiteSnake(void) : Enemy(110, "Snake")
{
	this->_death = "Zzzzzzzz...";
	std::cout << "Ssssshhhhhhhhh!" << std::endl;
	return ;
}

WhiteSnake::WhiteSnake(const WhiteSnake &cpWhiteSnake)
{
	*this = cpWhiteSnake;
	return ;
}

WhiteSnake&			WhiteSnake::operator=(const WhiteSnake &cpWhiteSnake)
{
	if (this != &cpWhiteSnake)
		this->_death = cpWhiteSnake._death;
	return (*this);
}

void 					WhiteSnake::takeDamage(int dmg)
{
	dmg -= 1;
	if (dmg >= 0)
	{
		this->setHP(this->getHP() - dmg);
		if (this->getHP() < 0)
			this->setHP(0);
	}
	return ;
}

WhiteSnake::~WhiteSnake(void)
{
	std::cout << this->_death << std::endl;
	return ;
}

