#pragma once
class IDataModel
{
public:
	virtual void SendFleet(int planetIndex){};
	virtual void BuildShip(int shield, int attack, int planetIndex){
		
	};
	virtual void StartTurn(){};
	virtual void EndTurn(){};
};