#include "Player.h"

Player::Player() 
{

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