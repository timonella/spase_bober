#pragma once
#include "IMapGenerator.h"
class MapGenerator:IMapGenerator {
public:
	void loadmap();
	void generatemap();
};