#include "stdafx.h"
#include "Player.h"

Player::Player() 
{
	FStats* Stats = new FStats();

	//Create new array to store ability subclasses in. Add new fireball to the array. 
	//Not 100% sure how this works...

	//FAbility** Abilities = new FAbility*[2];
	Abilities[0] = new FFireball;
	
	Health = 1;
}

Player::Player(int health, int strength, int dexterity, int wisdom, int charisma)
{
	Health = health;
	FStats* Stats = new FStats(strength, dexterity, wisdom, charisma);
}

Player::~Player()
{

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
