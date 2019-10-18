#pragma once


struct Position
{
	int x;
	int y;

	void Print() const;
};

static Position wrong_position{ -1,-1 };