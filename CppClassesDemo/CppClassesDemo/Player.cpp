#include "Player.h"

Player::Player()
{
	
}

Player::Player(int health, int armor, int damage)
{
	this->health = health;
	this->armor = armor;
	this->damage = damage;
}

Player::~Player()
{
	
}

long Player::getExperience()
{
	return this->experience;
}

void Player::setExperience(long experience)
{
	this->experience = experience;
}
