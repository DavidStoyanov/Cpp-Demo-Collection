#pragma once
#include "Player.h"

class Warrior : public Player
{
	
public:
	Warrior();
	Warrior(int health, int armor, int damage);
	~Warrior();

	void Attack();
	
private:
	
};

