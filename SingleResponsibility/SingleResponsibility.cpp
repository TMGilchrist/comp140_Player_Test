// SingleResponsibility.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"

//Make a cool d&d style character class. 
//

int main()
{
	Player Player1;
	Player* Player2 = new Player();

	Player1.GetHealth();
	Player2->GetHealth();

	if (Player2)
	{
		delete Player2;
		Player2 = nullptr;
	}	

    return 0;
}

