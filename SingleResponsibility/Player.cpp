#include "stdafx.h"
#include "Player.h"

Player::Player() 
{
	FStats* Stats = new FStats();

	//Create new array to store ability subclasses in. Add new fireball to the array. 
	//Not 100% sure how this works...

	//Abilities[0] = new FFireball;

	//Or use std::vector?
	Abilities.push_back(new FFireball);
	
	Health = 1;
}

Player::Player(int health, int strength, int dexterity, int wisdom, int charisma)
{
	Health = health;
	FStats* Stats = new FStats(strength, dexterity, wisdom, charisma);
}

Player::~Player()
{
	//std::vector<FAbility*>::iterator iter = Abilities.begin(); is the same as the following

	//deleting pointers in vector/collection
	auto iter = Abilities.begin();
	while (iter != Abilities.end())
	{
		if ((*iter))
		{
			delete (*iter);
			iter = Abilities.erase(iter);
		}
	}
	Abilities.clear();
}

void Player::SetHealth(int health)
{
	Health = health;
}

int Player::GetHealth()
{
	return Health;
}

std::string Player::GetAbilityName(int index)
{
	return Abilities[index]->GetName();
}

void Player::SetSelectedAbility(int index)
{
	SelectedAbility = Abilities[index];
}
