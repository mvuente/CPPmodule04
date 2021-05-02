
#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
private:
	int 		_HP;
	std::string _type;
public:
	Enemy(int HP, std::string const & type);
	Enemy();
	Enemy(const Enemy &cpEnemy);
	Enemy	&operator=(const Enemy &cpEnemy);
	virtual ~Enemy();
	virtual void takeDamage(int dmg);
	std::string getType() const;
	int 		getHP() const;
	void 		setHP(int HP);
	void		setType(std::string type);
};

std::ostream&	operator<<(std::ostream &out, const Enemy &enemy);

#endif
