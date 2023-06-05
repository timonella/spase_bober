#pragma once
#include "IModelGenerator.h"
class ModelGenerator:IModelGenerator {
public:

	void GenerateMap();
private:

	void GeneratePlanet();
	void PlanetsForPlayers();
	void ToDatamodel();
};