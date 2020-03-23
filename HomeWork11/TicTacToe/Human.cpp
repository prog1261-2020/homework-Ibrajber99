#include "Human.h"

int Human::inputPickChoice()
{
	int choice{ 0 };
	std::cout << "Choose a place to put your Pick\n";

	std::cin >> choice;

	return choice;

}
