#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "WhiteSnake.hpp"
#include "LaserGun.hpp"

int main()
{
	Character* me = new Character("Mad Max");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new WhiteSnake();
	me->attack(c);
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* lg = new LaserGun();
	me->equip(pr);
	std::cout << *me;
	me->recoverAP();
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(d);
	me->equip(lg);
	me->attack(d);
	me->attack(d);
	std::cout << *me;
	me->equip(pr);
	me->attack(c);
	me->recoverAP();
	std::cout << *me;
	delete me;
	return 0;
}
