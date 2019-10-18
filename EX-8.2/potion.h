#pragma once

class Potion
{
public:
	Potion() {};
	Potion(Position position);
	~Potion() {};

	int healthPotion = 10;
	Position GetPosition() const;
private:
	Position m_PotionPosition{ 0,0 };
};