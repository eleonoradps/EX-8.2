#pragma once
#include "position.h"
#include "potion.h"

// à mettre class Map;

enum class Direction
{
	UP,
	DOWN,
	RIGHT,
	LEFT
};

class Dragon
{
public:
	Dragon() {};
	~Dragon() {};

	void Move();
	void DragonHealth();
	void DragonDamage();
	bool PickupPotion(Potion potion);
	int playerInput{};

	Position GetPosition() const;

private:

	int dragonHealth = 100;
	int dragonDamage = 20;

	Position m_DragonPosition{ 1,1 };
	Direction direction;


};

