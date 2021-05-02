
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant &cpSuperMutant)
{
	*this = cpSuperMutant;
	return ;
}

SuperMutant&			SuperMutant::operator=(const SuperMutant &cpSuperMutant)
{
	if (this != &cpSuperMutant)
		this->_death = cpSuperMutant._death;
	return (*this);
}

void 					SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	if (dmg >= 0)
	{
		this->setHP(this->getHP() - dmg);
		if (this->getHP() < 0)
			this->setHP(0);
	}
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}
