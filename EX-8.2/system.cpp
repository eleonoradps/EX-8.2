#include <iostream>
#include "system.h"
#include "dragon.h"
#include "pig.h"


bool System::CombatSystem(Dragon* dragon)
{
	int userInput;
	Pig pig;

	std::cout << " You, a dragon, encountered a pig and wish to defy it. \n Press [1] to start the fight. \n";
	std::cin >> userInput;


	while (userInput == 1)
	{
		if (userInput == 1)
		{
			pig.pigHealth = pig.pigHealth - dragon->dragonDamage;
			std::cout << "The pig lost " << pig.pigHealth << " health points. \n";

			if (pig.pigHealth <= 0)
			{
				std::cout << "The pig died. \n You won! \n";
				return true;
			}
			else if (pig.pigHealth > 0)
			{
				dragon.dragonHealth = dragon.dragonHealth - pig.pigDamage;
				std::cout << "You lost " << dragon.dragonHealth << " health points. \n";
			}
			else if (dragon.dragonHealth <= 0)
			{
				std::cout << "You were killed by your enemy... \n";
				return false;
			}
		}
	}
}