#pragma once
#include <string>

class Animal
{
private:
	///Animal() = delete;//By doing this we cannot constructor objects with NO ARGS CTOR
public:
	virtual void speak() const;
	virtual void move() = 0;
	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;
	//virtual void move() = 0; //Abstract 

protected:
	Animal(const std::string& name, const std::string& type, const std::string& sound);
	std::string name;
	std::string type;
	std::string sound;
};

