
#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
	std::string _death;
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &cpRadScorpion);
	RadScorpion	&operator=(const RadScorpion &cpRadScorpion);
	virtual ~RadScorpion(void);
};

#endif
