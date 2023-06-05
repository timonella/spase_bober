#pragma once

class IModelGenerator{
public:
	virtual void LoadMap() {};
	virtual void GeneratePlanet() {};
	virtual void PlanetsForPlayers() {};
	virtual void ToDatamodel() {};
};
