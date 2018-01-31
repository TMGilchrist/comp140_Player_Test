#include "stdafx.h"
#include "Stats.h"

FStats::FStats()
{
}

FStats::FStats(int strength, int dexterity, int wisdom, int charisma)
{
	Strength = strength;
	Dexterity = dexterity;
	Wisdom = wisdom;
	Charisma = charisma;
}

FStats::~FStats()
{
}

void FStats::SetStrength(int strength)
{
	Strength = strength;
}

int FStats::GetStrength()
{
	return Strength;
}
