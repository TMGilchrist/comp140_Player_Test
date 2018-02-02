#pragma once

class FStats
{
public:
	FStats();

	//Initialise stats with custom values
	FStats(int strength, int dexterity, int wisdom, int charisma);
	~FStats();

	void SetStrength(int strength);
	int GetStrength();

	void SetDexterity(int dexterity);
	int GetDexterity();

	void SetWisdom(int wisdom);
	int GetWisdom();

	void SetCharisma(int charisma);
	int GetCharisma();

private:
	int Strength;
	int Dexterity;
	int Wisdom;
	int Charisma;

protected:

};