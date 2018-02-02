#include "stdafx.h"
#include "Ability.h"

FAbility::FAbility()
{
}

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

void FAbility::SetName(std::string name)
{
	Name = name;
}

std::string FAbility::GetName()
{
	return Name;
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
