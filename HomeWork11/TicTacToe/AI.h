#pragma once
#include "Player.h"
#include<iostream>
#include<string>
class AI :
	public Player
{
public:
	AI(std::string name) {
		name_ = name;
	};
	virtual ~AI() {};
	int inputPickChoice() override;
	char sign{ ' ' };

private:
	std::string name_;




};

