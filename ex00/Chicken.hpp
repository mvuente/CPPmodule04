
#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include <iostream>
#include "Victim.hpp"

class Chicken : virtual public Victim
{
private:
	Chicken(void);
public:
	Chicken(std::string name);
	virtual ~Chicken(void);
	Chicken(const Chicken &cpChicken);
	Chicken			&operator=(const Chicken &cpChicken);

};

std::ostream		&operator<<(std::ostream &out, const Chicken &chicken);

#endif
