#include "stdafx.h"
#include "Fireball.h"

FFireball::FFireball()
{
	SetName("Fireball");
	SetResourceType("Mana");
	SetCooldown(5);
	SetCost(20);
}

FFireball::~FFireball()
{
}

void FFireball::SetBurnDamage(int burnDamage)
{
	BurnDamage = burnDamage;
}

int FFireball::GetBurnDamage()
{
	return BurnDamage;
}

void FFireball::SetBurnDuration(int burnDuration)
{
	BurnDuration = burnDuration;
}

int FFireball::GetBurnDuration()
{
	return BurnDuration;
}
