#pragma once
#include "IModelGenerator.h"
class MapGenerator:IModelGenerator {
public:
	void loadmap();
	void generateplanet();
	void planetsforplayers();
	void toDatamodel();
};