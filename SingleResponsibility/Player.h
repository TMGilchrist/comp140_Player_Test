#pragma once
#include"Stats.h"

class Player 
{
public:
	FStats Stats;

	Player();

	//Initialise player with custom values
	Player(int health, int strength, int dexterity, int wisdom, int charisma);
	~Player();

	void SetHealth(int health);
	int GetHealth();


private:
	int Health;
	//FStats Stats;
	//abilities

protected:
	
};