#pragma once
#include "Stats.h"
#include "Ability.h"
#include "Fireball.h"

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

	std::string GetAbilityName(int index);


private:
	int Health;
	FAbility** Abilities = new FAbility*[2];

protected:
	
};