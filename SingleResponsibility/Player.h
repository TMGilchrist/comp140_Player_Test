#pragma once
#include "Stats.h"
#include "Ability.h"
#include "Fireball.h"
#include <vector>

class Player 
{
public:
	FStats Stats;
	FAbility* SelectedAbility; //The ability currently selected for editing/access

	Player();

	//Initialise player with custom values
	Player(int health, int strength, int dexterity, int wisdom, int charisma);
	~Player();

	void SetHealth(int health);
	int GetHealth();

	std::string GetAbilityName(int index); //Better way to access Ability funcitons?

	void SetSelectedAbility(int index); //Set the ability you want to access as selected

private:
	int Health;
	//FAbility** Abilities = new FAbility*[2]; //Define array of pointers

	std::vector<FAbility*> Abilities; //Vector of pointers

protected:	
};