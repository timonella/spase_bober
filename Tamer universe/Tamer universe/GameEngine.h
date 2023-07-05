#pragma once
#include "IGameEngine.h"
class GameEngine :IGameEngine {
public:
	void ShowSaveLoadOptions();
	void ShowLoadOptions() ;
	void BattleAndCapture(Fleet attacker,Fleet defender) ;
	void ShowEmpireInfo() ;
};