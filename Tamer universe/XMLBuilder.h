#pragma once
class WriteXML {
private:
	char* WriteTurn();
	char* WritePlanets();
	char* WritePlanet();
	char* WriteFleet();
	char* WriteShip();
	char* WriteOwner();
	char* WriteID();
public:
	char* WriteHeader();
	char* WriteUniverse(char* header);
};