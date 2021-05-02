#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* clone = bob->clone();
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(jim);
	Squad contr_vlc = Squad();
	Squad another_vlc = Squad();
	contr_vlc.push(bob);
	another_vlc = contr_vlc;
	std::cout << "The squad of " << vlc->getCount() << " brave units has been formed!"<< std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		ISpaceMarine* dub_cur = contr_vlc.getUnit(i);
		std::cout << "Colonel, go ahead!" << std::endl;
		cur->battleCry();
		dub_cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete clone;
	return 0;
}
