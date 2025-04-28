#pragma once
#include <string>
#include "Location.h"
#include <vector>
#include "Player.h"
class Game
{
public:
	Game();
	~Game();

	bool InitGame();
	void RunGame();
	void QuitGame();
	bool mIsGameRunning;
	std::string mUserInput;
	std::vector<Location> mLocations; 
	Player mPlayer;
	const std::string mIntroText = "You are a police detective for the local town well into your tenure as chief police officer.\n"
		"You working on a case of missing children found with bite marks in neck \n";

private:
	void HandleInput();
	void UpdateGame();
	void GenerateOutput();

};

