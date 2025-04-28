#include "Location.h"

Location::Location()
{
	mCoords = {};
	mLocationName = "";
	mLocationDescription = "";

}

Location::Location(std::string locationName, std::string locationDescription, Vector2 coords)
{
	mLocationName = locationName;
	mLocationDescription = locationDescription;
	mCoords = coords;
}

Location::~Location()
{
}
