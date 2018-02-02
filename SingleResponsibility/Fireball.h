#pragma once
#include "Ability.h"

class FFireball : public FAbility
{
public:
	FFireball();
	~FFireball();

	void SetBurnDamage(int burnDamage);
	int GetBurnDamage();

	void SetBurnDuration(int burnDuration);
	int GetBurnDuration();

private:
	int BurnDamage;
	int BurnDuration;

protected:
};
