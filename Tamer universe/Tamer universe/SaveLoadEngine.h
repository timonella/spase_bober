#pragma once
#include "ISaveLoadEngine.h"

class SaveLoadEngine : ISaveLoadEngine {
public:
	void CreateXML();
	void Save();
	void Load();
};