#include "Dog.h"
#include <iostream>
#include <string>
Dog::Dog(std::string name): Animal(name,"Dog","Woof")
{
}

void Dog::speak() const
{
	//Animal::speak();
	std::cout << "I like people and sausage" << getSound() << std::endl;
}

int Dog::walk()
{
	return ++walked;
}

void Dog::move()
{
	std::cout << "Im Running\n";
}
