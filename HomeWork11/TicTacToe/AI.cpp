#include "AI.h"
#include "Game.h"

int AI::inputPickChoice()
{
	
	std::vector<int>vec;
	
	for(int i{0}; i < Game::ticTacToe.size();i++){
		if (Game::ticTacToe.at(i) == 'E') {
			vec.push_back(i);
		}
	}
	return vec[rand()%vec.size()];
}
