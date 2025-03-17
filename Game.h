#pragma once
#include <string>
class Game
{
public:
	Game();
	~Game();

	bool InitGame();
	void RunGame();
	void QuitGame();
	bool IsGameRunning;
	std::string UserInput;

private:
	void HandleInput();
	void UpdateGame();
	void GenerateOutput();

};

