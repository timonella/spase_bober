#pragma once
#include <list>
#include "Ship.h"


using namespace std;

class Fleet
{
private:
	list<Ship> _ships;
public:
	void AddShip(Ship ship);
	Ship* GetShips();
	
	Fleet();
};

