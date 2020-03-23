#pragma once
#include "Game.h"
class Player
{
public:
	Player() {};
	virtual ~Player() {};

	virtual int inputPickChoice() = 0;
	char sign{ ' ' };

};

