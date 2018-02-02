#include "Ability.h"

FAbility::~FAbility()
{
}

void FAbility::SetCooldown(int cooldown)
{
	Cooldown = cooldown;
}

int FAbility::GetCooldown()
{
	return Cooldown;
}

void FAbility::SetResourceType(std::string resourceType)
{
	ResourceType = resourceType;
}

std::string FAbility::GetResourceType()
{
	return ResourceType;
}

void FAbility::SetCost(int cost)
{
	Cost = cost;
}

int FAbility::GetCost()
{
	return Cost;
}
