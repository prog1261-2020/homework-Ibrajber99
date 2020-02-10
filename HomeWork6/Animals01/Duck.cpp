#include "Duck.h"
#include <iostream>
#include <string>

Duck::Duck(std::string name): Animal(name,"Duck","Quack")
{
}

void Duck::speak() const
{
	//Animal::speak();
	std::cout << "I like bread and people" << getSound() <<  std::endl;
}

int Duck::feed()
{
	return ++fed;
}

void Duck::swim()
{
	std::cout << "Splash Splash Splash WOOOOOOOOOO\n";
}

void Duck::move()
{
	std::cout << "Im swimming\n";
}
