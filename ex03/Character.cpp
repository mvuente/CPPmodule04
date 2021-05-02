
#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const & name) : _name (name)
{
	_slot = new AMateria*[4];
	for (int i = 0; i <= 3; ++i)
		_slot[i] = 0;
}

Character::Character(const Character &cpCharacter)
{
	*this = cpCharacter;
}
Character&			Character::operator=(const Character &cpCharacter)
{
	if (this != &cpCharacter)
	{
		this->_name = cpCharacter._name;
		for (int i = 0; i <= 3; ++i)
		{
			if (this->_slot[i])
				delete this->_slot[i];
			this->_slot[i] = cpCharacter._slot[i]->clone();
		}
	}
	return (*this);
}
Character::~Character()
{
	for (int i = 0; i <= 3; ++i)
	{
		if (this->_slot[i])
			delete this->_slot[i];
	}
	delete this->_slot;
	std::cout << this->getName() << "'s life finished."<< std::endl;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void 				Character::equip(AMateria* m)
{
	unsigned int idx;
	if (!m)
	{
		std::cout << "It's not materia, Sir!" << std::endl;
		return ;
	}
	else if ((idx = this->checkFreeSlot()) == 4)
	{
		std::cout << "Your slots are full, Sir!" << std::endl;
		return ;
	}
	this->_slot[idx] = m;
	std::cout << "Materia " << m->getType() << " has been added to slot number " << idx << "." << std::endl;
	return ;
}

void 				Character::unequip(int idx)
{
	if (idx < 0 || idx >3 || !this->_slot[idx])
	{
		std::cout << "Wrong slot has been chosen, Sir!" << std::endl;
		return ;
	}
	this->_slot[idx] = 0;
	std::cout << "Slot " << idx << " freed, Sir!" << std::endl;
	return;
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >3 || !this->_slot[idx])
	{
		std::cout << "Wrong slot has been chosen, Sir!" << std::endl;
		return ;
	}
	this->_slot[idx]->use(target);
	return ;
}

unsigned int		Character::checkFreeSlot()
{
	int i = 0;
	for (i = 0; i <= 3; ++i)
	{
		if (!this->_slot[i])
			return (i);
	}
	return (i);
}