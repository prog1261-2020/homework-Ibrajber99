#pragma once
#include "Player.h"
#include<iostream>
#include<string>
class Human :
	public Player
{
public:
	Human(std::string name) { name_ = name;};
	int inputPickChoice();
	char sign{ ' ' };

private:
	std::string name_;



};

