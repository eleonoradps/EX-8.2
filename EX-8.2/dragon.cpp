#include <iostream>
#include "position.h"
#include "map.h"
#include "dragon.h"
#include "potion.h"

void Dragon::Move()
{
	char key;
	bool move = true;

	std::cin >> key;

	switch (key)
	{
	case 'w':
		direction = Direction::UP;
		break;

	case'a':
		direction = Direction::LEFT;
		break;

	case's':
		direction = Direction::DOWN;
		break;
	case'd':
		direction = Direction::RIGHT;
		break;
	}

	if (!move)
	{
		return;
	}

	switch (direction)
	{
	case Direction::DOWN:
		m_DragonPosition.y += 1;
		// if !map -> isFree (m_DragonPosition)
		//{ m_DragonPosition.y -= 1; }
		break;
	case Direction::UP:
		m_DragonPosition.y -= 1;
		// if (!map-> isFree(m_DragonPosition))
		// { m_DragonPosition.y += 1;
		break;

	case Direction::LEFT:
		m_DragonPosition.x -= 1;
		// if(!map -> IsFree(m_dragonPosition))
		// m_DragonPosition.x += 1;
		break;

	case Direction::RIGHT:
		m_DragonPosition.x += 1;
		//if(!map -> IsFree (m_DragonPosition))
		// { m_DragonPosition.x -= 1; }
		break;
	}

	m_DragonPosition.Print();
}

bool Dragon::PickupPotion(Potion potion)
{
	char y;
	char n;

	std::cout << "You found a potion! \n";
	std::cout << "Do you want to use it ? Press y for yes and n for no. \n";
	std::cin >> playerInput;

	if (playerInput == y)
	{
		dragonHealth = dragonHealth + potion.healthPotion;
		std::cout << "You used a healing potion! You got " << dragonHealth << " health points. \n";
		return true;
	}
	else if (playerInput == n)
	{
		playerInput = n;
		return false;
	}
}

Position Dragon::GetPosition() const
{
	return m_DragonPosition;
}