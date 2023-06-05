#pragma once
#include "IModelGenerator.h"
class ModelGenerator:IModelGenerator {
public:
	void LoadMap();
	void GeneratePlanet();
	void PlanetsForPlayers();
	void ToDatamodel();
};