#pragma once
#include<vector>
#include "Player.h"



class Game
{
public:

	static std::vector<char>ticTacToe;
	

	
	void mainMenu();
	bool checkIfWon(char H,char AI);
	void checkIfValid(int n, char c);
	
};

