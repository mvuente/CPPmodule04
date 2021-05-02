
#include "Chicken.hpp"

Chicken::Chicken(void)
{
	std::cout << "Chicken is wrong!!!" << std::endl;
	return ;
}

Chicken::Chicken(std::string name) : Victim(name)
{
	this->_name = name;
	this->_result_of_magic = " sweet henny!";
	std::cout << "Co-co-co." << std::endl;
	return ;
}

Chicken::Chicken(const Chicken &cpChicken)
{
	*this = cpChicken;
	return ;
}

Chicken		&Chicken::operator=(const Chicken &cpChicken)
{
	if (this != &cpChicken)
	{
		this->_name = cpChicken._name;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Chicken &Chicken)
{
	out << "I am " << Chicken.getName() << " and I like cereals!" << std::endl;
	return (out);
}

Chicken::~Chicken(void)
{
	std::cout << "upps! Where is my head??"  << std::endl;
	return ;
}