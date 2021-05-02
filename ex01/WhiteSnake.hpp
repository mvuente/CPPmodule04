
#ifndef WHITESNAKE_HPP
#define WHITESNAKE_HPP

#include <iostream>
#include "Enemy.hpp"

class WhiteSnake : public Enemy
{
private:
	std::string _death;
public:
	WhiteSnake(void);
	WhiteSnake(const WhiteSnake &cpWhiteSnake);
	WhiteSnake		&operator=(const WhiteSnake &cpWhiteSnake);
	virtual ~WhiteSnake(void);
	virtual void 	takeDamage(int dmg);
};

#endif
