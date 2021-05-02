
#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
	std::string _death;
public:
SuperMutant(void);
SuperMutant(const SuperMutant &cpSuperMutant);
SuperMutant		&operator=(const SuperMutant &cpSuperMutant);
virtual ~SuperMutant(void);
virtual void 	takeDamage(int dmg);
};

#endif
