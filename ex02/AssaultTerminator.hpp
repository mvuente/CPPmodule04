
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator &cpAssaultTerminator);
	AssaultTerminator&	operator=(const AssaultTerminator &cpAssaultTerminator);
	virtual ~AssaultTerminator(void);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
