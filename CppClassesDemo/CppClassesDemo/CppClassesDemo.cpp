// CppClassesDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Player.h"
#include "Warrior.h"

using namespace std;

int main()
{
    Player player = Player();
	player.health = 200;
	player.armor = 0;
	player.setExperience(0);

	Player player2 = Player(100, 200, 5);

	cout << "The player have " << player.health << " hp and " << player.getExperience() << " xp." << endl;

	cout << endl;

	cout << "The player2 have " << player2.health << " hp and " << player2.getExperience() << " xp." << endl;

	Warrior warrior = Warrior(200, 200, 20);

	cout << "The warrior have " << warrior.health << " hp and " << warrior.armor << " armor." << endl;
	
}