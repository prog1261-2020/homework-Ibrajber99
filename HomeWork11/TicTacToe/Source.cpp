#include "Game.h"
#include "Human.h"
#include "AI.h"
#include <iostream>
#include <vector>


int main() {
	std::vector<std::unique_ptr<Player>> ticTacGame;
	ticTacGame.push_back(std::make_unique<AI>("Alexis"));
	ticTacGame.push_back(std::make_unique<Human>("Adam"));
	int counterBoardDisplay{ 0 };
	char c;
	Game g;
	g.mainMenu();
	while (true) {
		std::cin >> c;
		if (c == 's') {
			std::cout << "choose your Sign\n  X   O\n";
			std::cin >> c;
			if (c == 'x') {
				ticTacGame.at(1)->sign = c;
				ticTacGame.at(0)->sign = 'o';
			}
			else if (c == 'o') {
				ticTacGame.at(1)->sign = c;
				ticTacGame.at(0)->sign = 'x';
			}

		}if (c == 'q') {
			break;
		}


		g.gridMenu();
		int AI = ticTacGame.at(0)->inputPickChoice();
		int Hum = ticTacGame.at(1)->inputPickChoice();
		std::cout << "AI Picked " << AI << std::endl;

		g.checkIfValid(Hum, ticTacGame.at(1)->sign);
		g.checkIfValid(AI, ticTacGame.at(0)->sign);
		if (g.checkIfWon(ticTacGame.at(0)->sign, ticTacGame.at(1)->sign)) {
			for (auto i : Game::ticTacToe) {
				if (counterBoardDisplay == 3) {
					std::cout << "\n";
					counterBoardDisplay = 0;
				}
				std::cout << i << " ";
				counterBoardDisplay++;
			}
			break;
		}
		for (auto i : Game::ticTacToe) {
			if (counterBoardDisplay == 3) {
				std::cout << "\n";
				counterBoardDisplay = 0;
			}
			std::cout << i << " ";
			counterBoardDisplay++;
		}
		std::cout << std::endl;
		system("pause");
		system("cls");
		for (auto i : Game::ticTacToe) {
			if (counterBoardDisplay == 3) {
				std::cout << "\n";
				counterBoardDisplay = 0;
			}
			std::cout << i << " ";
			counterBoardDisplay++;
		}
		std::cout << std::endl;
	}
	
}


