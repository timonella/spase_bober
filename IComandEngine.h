#pragma once

class IComandEngine {
public:

	virtual void FinishTurn() = 0;
	virtual void ShowUniverseStatus() = 0;
	virtual void SendFleet() = 0;
	virtual void BuildShip() = 0;

	virtual void ComandEng() = 0;

};