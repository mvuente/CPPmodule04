
#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <fstream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer(void);
	Sorcerer(const Sorcerer &cpSorcerer);
	Sorcerer			&operator=(const Sorcerer &cpSorcerer);
	std::string 		getName(void) const;
	std::string			getTitle(void) const;
	void 				polymorph(Victim const &) const;
};

std::ostream		&operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif
