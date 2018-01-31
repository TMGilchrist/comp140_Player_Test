#pragma once

class FStats
{
public:

	FStats();

	//Initialise stats with strength, dexterity, wisdom, charisma
	FStats(int, int, int, int);
	~FStats();

	void SetStrength(int);
	int GetStrength();

private:
	int Strength;
	int Dexterity;
	int Wisdom;
	int Charisma;

protected:

};