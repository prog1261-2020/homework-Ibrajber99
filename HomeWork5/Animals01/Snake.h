#pragma once
#include "Animal.h"
class Snake :
	public Animal
{
public:
	Snake(std::string name);
	void speak() const override;
	int feed();
	void swim();
	void move() override;
};

