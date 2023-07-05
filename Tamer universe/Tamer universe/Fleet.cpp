#include "Fleet.h"

void Fleet::AddShip(Ship ship)
{
	_ships.push_back(ship);


}

Fleet::Fleet()
{

}

Ship* Fleet::GetShips() {
	Ship* result=new Ship[_ships.size()];
	std::copy(_ships.begin(), _ships.end(), result);
	return result;
}
