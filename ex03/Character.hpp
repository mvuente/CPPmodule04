
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string 	_name;
	AMateria**		_slot;
	Character();
public:
	Character(std::string const & name);
	Character(const Character &cpCharacter);
	Character&					operator=(const Character &cpCharacter);
	~Character();
	std::string const & 		getName() const;
	virtual void 				equip(AMateria* m);
	virtual void 				unequip(int idx);
	virtual void 				use(int idx, ICharacter& target);
	unsigned int				checkFreeSlot();
};

#endif
