#pragma once
#include"Stats.h"

class Player 
{
public:

	Player();

	//Initialise player with Health, Strength, Dexterity, Wisdom, Charisma
	Player(int, int, int, int, int);
	~Player();

	void SetHealth(int );
	int GetHealth();


private:
	int Health;
	FStats Stats;

	//stats
	//abilities

protected:
	
};