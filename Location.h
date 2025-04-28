#pragma once
#include <string>


struct Vector2 {
	float x;
	float y;
};

class Location
{
public:
	Location();
	Location(std::string locationName, std::string locationDescription, Vector2 coords);
	~Location();

	std::string mLocationName;
	std::string mLocationDescription;
	Vector2 mCoords;
	
};

