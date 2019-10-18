#pragma once
#include "position.h"
#include "dragon.h"


class Pig
{
public:
	Pig(const int damage);
	Pig(int damage, Position pos);
	~Pig() {};

private:
	int pigHealth = 100;
	int pigDamage = 10;

	Position m_PigPosition{ 0,0 };
};