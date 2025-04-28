#include "Game.h"
#include <iostream>
#include <cctype>
#include <chrono>
#include <thread>

Game::Game()
{
	mIsGameRunning = true;
	mUserInput = "";
	mLocations = {};
	mPlayer = {};
}

Game::~Game()
{
}


void Game::RunGame()
{

	while (mIsGameRunning)
	{
		HandleInput();
		UpdateGame();
		GenerateOutput();
	}

}

bool Game::InitGame()
{
	//Set locations 
	Location locationOne = {"Local police station" ,"You're sitting as your desk with a stack of papers with information about the victims.", {0,0} };
	mLocations.push_back(locationOne);
	Location locationTwo = { "Shed", "There's a run down wooden shack with a padlock around the door.", {0,1} };
	mLocations.push_back(locationTwo);

	//Set initial player location 
	mPlayer.SetCurrentLocation(locationOne);


	for (char c : mIntroText)
	{
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
	}


	std::cout << "\nCurrent Location: " << mPlayer.GetCurrentLocation().mLocationName << std::endl;
	std::cout << mPlayer.GetCurrentLocation().mLocationDescription << std::endl;

	return true;
}

void Game::HandleInput()
{
	std::cout << "\nEnter a command: ";
	std::cin >> mUserInput;

	if (mUserInput == "North")
	{

	}
	else if (mUserInput == "North East")
	{

	}
	else if (mUserInput == "East")
	{

	}
	else if (mUserInput == "South East")
	{

	}
	else if (mUserInput == "South")
	{

	}
	else if (mUserInput == "South West")
	{

	}
	else if (mUserInput == "West")
	{

	}
	else if (mUserInput == "North West")
	{

	}
	else{
		std::cout << "I don't recognize that command." << std::endl;
	}

	if (mUserInput == "quit")
	{
		mIsGameRunning = false;
	}


}

void Game::UpdateGame()
{

}

void Game::GenerateOutput()
{

}

void Game::QuitGame()
{
	std::cout << "Thanks for Playing Loser";
}
