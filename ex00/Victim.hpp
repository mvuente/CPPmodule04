
#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <fstream>

class Victim
{
protected:
	std::string _name;
	std::string _result_of_magic;
	Victim(void);
public:
	Victim(std::string name);
	virtual ~Victim(void);
	Victim(const Victim &cpVictim);
	Victim			&operator=(const Victim &cpVictim);
	std::string 	getName(void) const;
	void 			getPolymorphed() const;
};

std::ostream		&operator<<(std::ostream &out, const Victim &victim);

#endif
