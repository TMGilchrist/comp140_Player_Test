#pragma once
#include <iostream>

class FAbility 
{
public:

	FAbility();
	~FAbility();

	void SetName(std::string name);
	std::string GetName();

	void SetResourceType(std::string resourceType);
	std::string GetResourceType();

	void SetCooldown(int cooldown);
	int GetCooldown();

	void SetCost(int cost);
	int GetCost();


private:
	std::string Name;
	std::string ResourceType;
	int Cooldown;
	int Cost;
	//type: point, aoe

protected:
};
