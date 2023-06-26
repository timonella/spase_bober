#include "IDataModel.h"
#include "Planet.h"
#include "Ship.h"
#include "Fleet.h"
using namespace std;
class DataModel:public IDataModel {
	Fleet Player1Fleet;
	Fleet Player2Fleet;
	Planet* planets;
	enum Current Player1;
	enum Current Player2;
public:
	void SendFleet(int planetIndex);
	void BuildShip(int shield, int attack, int planetIndex);
	void StartTurn();
	void EndTurn();
};
