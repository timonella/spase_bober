#include "IDataModel.h"
#include<random>
#include <time.h>
#include <iostream>
using namespace std;
class DataModel {
	void SendShip(int planetIndex);
	void BuildShip(int shield, int attack);
	void StartTurn();
	void EndTurn();
	void PlanetIndex(int planetIndex) {};
};
