
#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : virtual public AMateria
{
public:
	Cure();
	Cure(const Cure &cpCure);
	Cure			&operator=(const Cure &cpCure);
	~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
