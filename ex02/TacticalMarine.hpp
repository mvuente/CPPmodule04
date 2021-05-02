
#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &cpTacticalMarine);
	TacticalMarine&	operator=(const TacticalMarine &cpTacticalMarine);
	virtual ~TacticalMarine(void);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
