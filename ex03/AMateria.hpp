
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria;

#include "ICharacter.hpp"

class AMateria
{
private:
	std::string	const	_type;
	unsigned int		_xp;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &cpAMateria);
	AMateria			&operator=(const AMateria &cpAMateria);
	virtual ~AMateria();
	std::string const & getType() const;
	unsigned int 		getXP() const;
	void 				increaseXP();
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};

#endif
