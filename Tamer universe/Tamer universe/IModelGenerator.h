#pragma once

class IModelGenerator{
public:
	virtual void GenerateMap() {};
private:
	virtual void GeneratePlanet() {};
	virtual void PlanetsForPlayers() {};
	virtual void ToDatamodel() {};
};
