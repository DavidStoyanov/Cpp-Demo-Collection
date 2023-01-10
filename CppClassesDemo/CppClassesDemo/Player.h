#pragma once
class Player
{
	
public:
	Player();
	Player(int health, int armor, int damage);
	~Player();

	int health;
	int armor;
	int damage;

	long getExperience();
	void setExperience(long experience);
	
private:

	long experience;
	
	
};

