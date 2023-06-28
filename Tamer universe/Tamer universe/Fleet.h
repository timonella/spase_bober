#pragma once
#include <list>
#include <iostream>
#include "Ship.h"
#include "OwnedObject.h"
class Fleet : public OwnedObject{
private:
	list<Ship> ships;
public:
	int GetShip(int planetindex);
};

