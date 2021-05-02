
#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	int 			_count;
	ISpaceMarine**	unit;
public:
	Squad(void);
	Squad(const Squad &cpSquad);
	Squad &					operator=(Squad const & cpSquad);
	virtual ~Squad(void);
	virtual int 			getCount(void) const;
	virtual ISpaceMarine*	getUnit(int N) const;
	virtual int 			push(ISpaceMarine* troop);
	int						checkUnit(ISpaceMarine* troop);
	void					setCount(int N);
};

#endif
