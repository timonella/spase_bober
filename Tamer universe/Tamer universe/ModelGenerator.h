#pragma once
#include "IModelGenerator.h"
class ModelGenerator:IModelGenerator {
public:
	void loadmap();
	void generateplanet();
	void planetsforplayers();
	void toDatamodel();
};
