#pragma once
#include "IComandEngine.h"

class ComandEngine : public IComandEngine {
public:

	int WelcomeMessage();
	int ShowHelp();
	int FinishTurn();
	int ShowUniverseStatus();
	int SendFleet(/*int targetPlanetId*/);
	int BuildShip(/*int attack, int shield*/);
	int Start();

};
