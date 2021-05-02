
#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <fstream>
#include "Victim.hpp"

class Peon : virtual public Victim
{
private:
	Peon(void);
public:
	Peon(std::string name);
	virtual ~Peon(void);
	Peon(const Peon &cpPeon);
	Peon			&operator=(const Peon &cpPeon);

};

std::ostream		&operator<<(std::ostream &out, const Peon &peon);
#endif
