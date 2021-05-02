
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &cpAssaultTerminator)
{
	*this = cpAssaultTerminator;
	return ;
}

AssaultTerminator&			AssaultTerminator::operator=(const AssaultTerminator &cpAssaultTerminator)
{
	if (this != &cpAssaultTerminator)
		return (*this);
	return (*this);
}

ISpaceMarine*				AssaultTerminator::clone() const
{
	ISpaceMarine* cloned_guy = new AssaultTerminator;
	*cloned_guy = *this;
	return (cloned_guy);
}

void 					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void 					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void 					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
	return ;
}
