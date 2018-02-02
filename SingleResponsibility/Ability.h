#pragma once
#include <iostream>

class FAbility 
{
public:

	FAbility()
	{

	}

	~FAbility();

	void SetCooldown(int cooldown);
	int GetCooldown();

	void SetResourceType(std::string resourceType);
	std::string GetResourceType();

	void SetCost(int cost);
	int GetCost();


private:
	int Cooldown;
	std::string ResourceType;
	int Cost;
	//type: point, aoe

protected:
};
