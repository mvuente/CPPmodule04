#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Chicken.hpp"

int main()
{
	Sorcerer		robert("Robert", "the Magnificent");
	Victim			jim("Jimmy");
	Peon			joe("Joe");
	Chicken			pet("Petya");
	std::cout << robert << jim << joe << pet;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(pet);
	return 0;
}
