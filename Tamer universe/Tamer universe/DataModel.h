#include "IDataModel.h"
#include "Planet.h"
#include "Ship.h"
#include "Fleet.h"
using namespace std;
class DataModel:public IDataModel {
	Fleet Planet;
public:
	void SendFleet(int planetIndex);
	void BuildShip(int shield, int attack, int planetIndex);
	void StartTurn();
	void EndTurn();
};
