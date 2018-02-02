// SingleResponsibility.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include <iostream>
#include "string" // ?

//Make a cool d&d style character class. 
//

int main()
{
	Player Player1;
	Player* Player2 = new Player();

	Player1.GetHealth();
	Player2->GetHealth();

	Player2->Stats.SetCharisma(5);
	std::cout << "\n" << Player2->Stats.GetCharisma();

	//std::cout << "\n" << Player2->GetAbilityName(0);

	Player2->SetSelectedAbility(0);
	std::cout << "\n" << Player2->SelectedAbility->GetName();

	if (Player2)
	{
		delete Player2;
		Player2 = nullptr;
	}	

	//Clear cin buffer and then wait for input to stop program closing instantly.
	std::cout << "\nPress any key to exit.";
	//std::cin.ignore();
	std::cin.get();

    return 0;
}

