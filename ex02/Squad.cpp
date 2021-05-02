
#include "Squad.hpp"

Squad::Squad(void)
{
	this->_count = 0;
	std::cout << "New Squad's forming. Come on to the orange-white raw!" << std::endl;
	return ;
}

Squad::Squad(const Squad &cpSquad)
{
	*this = cpSquad;
	return ;
}

Squad &		Squad::operator=( Squad const & cpSquad)
{
	if (this != &cpSquad)
	{
		if (this->_count)
		{
			for (int i = 0; i < this->_count; ++i)
				delete this->unit[i];
			delete this->unit;
		}
		this->_count = cpSquad._count;
		if (!this->_count)
			this->unit = NULL;
		else
		{
			this->unit = new ISpaceMarine*[this->_count];
			for (int i = 0; i < cpSquad.getCount(); ++i)
				this->unit[i] = cpSquad.unit[i]->clone();
		}
	}
	return (*this);
}

int				Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int N) const
{
	if (N < 0 || N >= this->getCount())
	{
		std::cout << "There is no such unit, Sir! Please, call another one!" << std::endl;
		return (NULL);
	}
	return (this->unit[N]);
}

int				Squad::push(ISpaceMarine* troop)
{
	if (!troop || this->checkUnit(troop))
		return (this->getCount());
	ISpaceMarine** tmp = new ISpaceMarine*[this->getCount() + 1];
	int num = 0;
	while (num < this->getCount())
	{
		tmp[num] = this->unit[num];
		num++;
	}
	tmp[num] = troop;
	this->setCount(num + 1);
	if ((this->getCount() - 1))
		delete this->unit;
	this->unit = tmp;
	return (num + 1);
}

void		Squad::setCount(int N)
{
	this->_count = N;
	return ;
}

int			Squad::checkUnit(ISpaceMarine* troop)
{
	if (!this->getCount())
		return (0);
	int num = 0;
	while (num < this->getCount())
	{
		if (this->unit[num] == troop)
			return (1);
		num++;
	}
	return (0);
}

Squad::~Squad(void)
{
	std::cout << "Destroy started." << std::endl;
	if (this->_count)
	{
		for (int i = 0; i < this->_count; ++i)
			delete this->unit[i];
		delete this->unit;
	}
	std::cout << "The squad has been destroyed." << std::endl;
	return ;
}
