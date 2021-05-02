
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	std::cout << "Sorcerer is wrong!!!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name (name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer &cpSorcerer)
{
	*this = cpSorcerer;
	return ;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &cpSorcerer)
{
	if (this != &cpSorcerer)
	{
		this->_name = cpSorcerer._name;
		this->_title = cpSorcerer._title;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Sorcerer &Sorcerer)
{
	out << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}

std::string 	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string 	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void 			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}