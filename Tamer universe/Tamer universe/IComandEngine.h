#pragma once

class IComandEngine {
public:

	virtual void WelcomeMessage() = 0;
	virtual void ShowHelp() = 0;
	virtual void FinishTurn() = 0;
	virtual void ShowUniverseStatus() = 0;
	virtual void SendFleet() = 0;
	virtual void BuildShip() = 0;
	virtual void Start() = 0;

};