#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name): Animal(name,"Cat","Meow")
{
	
}

int Cat::pet()
{
	return ++petted;
}

void Cat::speak() const
{
	//Animal::speak();
	std::cout << " I LIKE Mice\n" << getSound() << std::endl;
}

void Cat::move()
{
	std::cout << "Im Cuddeling you\n";
}
