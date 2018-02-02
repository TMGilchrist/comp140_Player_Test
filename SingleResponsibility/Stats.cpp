#include "stdafx.h"
#include "Stats.h"

//Default constructor
FStats::FStats()
{
	Strength = 0;
	Dexterity = 0;
	Wisdom = 0;
	Charisma = 0;
}

/*
Constructor with parameters
*/
FStats::FStats(int strength, int dexterity, int wisdom, int charisma)
{
	Strength = strength;
	Dexterity = dexterity;
	Wisdom = wisdom;
	Charisma = charisma;
}

//Deconstructor
FStats::~FStats()
{
}

/*--------------------------------------
Setters and getters
--------------------------------------*/

void FStats::SetStrength(int strength)
{
	Strength = strength;
}

int FStats::GetStrength()
{
	return Strength;
}

void FStats::SetDexterity(int dexterity)
{
	Dexterity = dexterity;
}

int FStats::GetDexterity()
{
	return Dexterity;
}

void FStats::SetWisdom(int wisdom)
{
	Wisdom = wisdom;
}

int FStats::GetWisdom()
{
	return Wisdom;
}

void FStats::SetCharisma(int charisma)
{
	Charisma = charisma;
}

int FStats::GetCharisma()
{
	return Charisma;
}


