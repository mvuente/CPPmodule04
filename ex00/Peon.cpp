
#include "Peon.hpp"

Peon::Peon(void)
{
	std::cout << "Peon is wrong!!!" << std::endl;
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	this->_result_of_magic = " pink pony!";
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(const Peon &cpPeon)
{
	*this = cpPeon;
	return ;
}

Peon		&Peon::operator=(const Peon &cpPeon)
{
	if (this != &cpPeon)
	{
		this->_name = cpPeon._name;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Peon &Peon)
{
	out << "I am " << Peon.getName() << " and I like otters!" << std::endl;
	return (out);
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..."  << std::endl;
	return ;
}