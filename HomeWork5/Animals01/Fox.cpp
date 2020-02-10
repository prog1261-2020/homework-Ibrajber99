#include "Fox.h"
#include <iostream>
#include <string>

Fox::Fox(std::string name): Animal(name,"FOX","WOOF")
{
}

void Fox::speak() const
{
	std::cout << "I like Tricking  people" << " " << getSound() << std::endl;
}





void Fox::move()
{
	std::cout << "Im wollfing";
}
