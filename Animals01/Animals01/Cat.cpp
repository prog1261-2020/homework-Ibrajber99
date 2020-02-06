#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name): Animal(name,"Cat","Meow")
{
	
}

void Cat::speak() const
{
	Animal::speak();
	std::cout << " I LIKE Mice\n";
}
