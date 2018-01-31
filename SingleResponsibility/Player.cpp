#include "stdafx.h"
#include "Player.h"

Player::Player() 
{
	FStats* Stats = new FStats();
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
};