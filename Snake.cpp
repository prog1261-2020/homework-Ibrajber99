#include "Snake.h"
#include <iostream>

Snake::Snake(std::string name): Animal(name,"Snake","Slethrin")
{
}

void Snake::speak() const
{
	std::cout << "I like Eating Rats" << getSound() << std::endl;
}



void Snake::move()
{
	std::cout << "Im sletherine\n";
}
