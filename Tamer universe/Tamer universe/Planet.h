#pragma once
#include "OwnedObject.h"
class Planet
{
	int id;
	enum Owner Player1;
	enum Owner Player2;
	enum Owner neytral;
	int _turnsToBiulde = -1;
	int _shipOnBiulde = -1;
	int _fleetOnOrbit = -1;
	int _fleet = 0;
};

