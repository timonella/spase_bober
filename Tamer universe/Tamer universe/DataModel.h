#include "IDataModel.h"
using namespace std;
class DataModel:public IDataModel {
	void SendFleet(int planetIndex);
	void BuildShip(int shield, int attack, int planetIndex);
	void StartTurn();
	void EndTurn();
};
