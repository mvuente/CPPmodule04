#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(NULL);
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp1;
	tmp = src->createMateria("fire");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(NULL);
	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	me->use(2, *bob);
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	tmp1 = tmp;
	std::cout << tmp1->getXP() << std::endl;
	me->unequip(0);
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
