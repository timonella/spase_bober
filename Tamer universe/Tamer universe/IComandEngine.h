#pragma once

class IComandEngine {
public:

	virtual int WelcomeMessage() = 0;
	virtual int ShowHelp() = 0;
	virtual int FinishTurn() = 0;
	virtual int ShowUniverseStatus() = 0;
	virtual int SendFleet() = 0;
	virtual int BuildShip() = 0;
	virtual int Start() = 0;

};