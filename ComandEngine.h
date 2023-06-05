#pragma once
#include "IComandEngine.h"

class ComandEngine : public IComandEngine {
public:

	void FinishTurn();
	void ShowUniverseStatus();
	void SendFleet(int targetPlanetId);
	void BuildShip(int attack, int shield);

	void ComandEng();

};

