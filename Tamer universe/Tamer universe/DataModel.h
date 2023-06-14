#include "IDataModel.h"
#include<random>
#include <time.h>
#include <iostream>
using namespace std;
class DataModel {
	void SendFleet(int planetIndex);
	void BuildShip(int shield, int attack, int planetIndex);
	void StartTurn();
	void EndTurn();
};
