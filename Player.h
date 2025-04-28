#pragma once
#include <string>
#include <vector>
#include "Location.h"
class Player
{
public:
	Player();
	Player(std::string name);
	~Player();

	void SetCurrentLocation(Location location) {
		mCurrentLocation = location;
	}

	Location GetCurrentLocation() const {
		return mCurrentLocation;
	}

	std::string GetName() const {
		return mName;
	}
	int GetHealth() const {
		return mHealth;
	}


private:
	Location mCurrentLocation;
	std::string mName;
	int mHealth;
	std::vector<std::string> mInventory;

};

