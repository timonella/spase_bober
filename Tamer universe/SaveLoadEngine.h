#pragma once
#include "ISaveLoadEngine.h"

class SaveLoadEngine : ISaveLoadEngine {
public:
	void Save();
	void Load();
};