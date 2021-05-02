
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &cpTacticalMarine)
{
	*this = cpTacticalMarine;
	return ;
}

TacticalMarine&			TacticalMarine::operator=(const TacticalMarine &cpTacticalMarine)
{
	if (this != &cpTacticalMarine)
		return (*this);
	return (*this);
}

ISpaceMarine*			TacticalMarine::clone() const
{
	ISpaceMarine* cloned_guy = new TacticalMarine;
	*cloned_guy = *this;
	return (cloned_guy);
}

void 					TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

void 					TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void 					TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}
