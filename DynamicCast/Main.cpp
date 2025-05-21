#include <iostream>
#include <string>

class Entity
{
public:
	virtual void PrintName() {} // Need a v table
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

int main() {
	Player* player = new Player();
	Entity* actuallyPlayer = player;
	Entity* actuallyEnemy = new Enemy();

	Player* p0 = dynamic_cast<Player*>(actuallyPlayer);
	if (p0)
		std::cout << "p0 cast success" << std::endl;

	Player* p1 = dynamic_cast<Player*>(actuallyEnemy);
	if (p1)
		std::cout << "p1 cast success" << std::endl;
	std::cin.get();
}