#pragma once
class IDataModel
{
public:
	virtual void SendShip(int planetIndex){};
	virtual void BuildShip(int shield, int attack){};
	virtual void StartTurn(){};
	virtual void EndTruen(){};
};
class Fleet:QwnedObject{
public:

private:
	
	
};
class Planet:QwnedObject{
public:

private:
	void turnsToBuild() {};
	void shipOnBuildd() {};
	void fleetOnOrbit() {};

};
class Ship {
public:

private:
	void attack() {};
	void defense() {};

};
class QwnedObject {
public:

};
