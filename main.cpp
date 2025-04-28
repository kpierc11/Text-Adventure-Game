#include <iostream>
#include "Game.h"

int main()
{
	Game game;

	bool gameInit = game.InitGame();

	if(gameInit)
	{
		game.RunGame();
	}

	game.QuitGame();
}