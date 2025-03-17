#include "Game.h"
#include <iostream>

Game::Game()
{
	IsGameRunning = false;
	UserInput = "";
}

Game::~Game()
{
}


void Game::RunGame()
{
	
	while(IsGameRunning)
	{
		HandleInput();
		UpdateGame();
		GenerateOutput();
	}

}

bool Game::InitGame()
{
	IsGameRunning = true;

	return true;
}

void Game::HandleInput()
{

	std::cin >> UserInput;


}

void Game::UpdateGame()
{

}

void Game::GenerateOutput()
{
	std::cout << UserInput;
}

void Game::QuitGame()
{


}
