
#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : virtual public AMateria
{
public:
	Ice();
	Ice(const Ice &cpIce);
	Ice			&operator=(const Ice &cpIce);
	~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif
