#include "Game.h"
#include <iostream>

std::vector<char> Game::ticTacToe =  {
		
		'E','E','E'
		,'E','E','E'
		,'E','E','E'
}; 

void Game::mainMenu()
{
	std::cout <<
		"***************Pet Caretaker * ***************\n" <<
		"* (S) Start TicTacToe						  *\n" <<
		"* (Q)  Quit program                          *\n" <<
		"**********************************************\n";
	std::cout << std::endl;
}

bool Game::checkIfWon(char H,char AI)
{
	if (H == ticTacToe.at(0) && H == ticTacToe.at(4) && H == ticTacToe.at(8)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(0) && AI == ticTacToe.at(4) && AI == ticTacToe.at(8)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (H == ticTacToe.at(2) && H == ticTacToe.at(4) && H == ticTacToe.at(6)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(2) && AI == ticTacToe.at(4) && AI == ticTacToe.at(6)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}
	if (H == ticTacToe.at(0) && H == ticTacToe.at(1) && H == ticTacToe.at(2)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(0) && AI == ticTacToe.at(1) && AI == ticTacToe.at(2)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}
	if (H == ticTacToe.at(3) && H == ticTacToe.at(4) && H == ticTacToe.at(5)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(3) && AI == ticTacToe.at(4) && AI == ticTacToe.at(5)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}
	if (H == ticTacToe.at(6) && H == ticTacToe.at(7) && H == ticTacToe.at(8)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(6) && AI == ticTacToe.at(7) && AI == ticTacToe.at(8)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}
	if (H == ticTacToe.at(0) && H == ticTacToe.at(3) && H == ticTacToe.at(6)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(0) && AI == ticTacToe.at(3) && AI == ticTacToe.at(6)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}
	if (H == ticTacToe.at(1) && H == ticTacToe.at(4) && H == ticTacToe.at(7)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(1) && AI == ticTacToe.at(4) && AI == ticTacToe.at(7)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}
	if (H == ticTacToe.at(2) && H == ticTacToe.at(5) && H == ticTacToe.at(8)) {
		std::cout << "The Player with the signed value " << H << " Wins";
		return true;
	}
	if (AI == ticTacToe.at(2) && AI == ticTacToe.at(5) && AI == ticTacToe.at(8)) {
		std::cout << "The Player with the signed value " << AI << " Wins";
		return true;
	}

	return false;

}



void Game::checkIfValid(int n,char c)
{
	
	if (n > 9 || n < 1) {
		std::cout << "Please Input a Valid Field\n";

	} else if (ticTacToe.at(n-1) == 'E' || ticTacToe.at(n-1) == 'E') {
		ticTacToe.at(n-1) = c;
	}
	else {
		std::cout << "Occupied Field\n";
	}
}
