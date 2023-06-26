#pragma once
#include "IGameEngine.h"
class GameEngine :IGameEngine {
public:
	void GetComands() ;
	void ShowSaveLoadOptions();
	void ShowLoadOptions() ;
	void BattleAndCapture() ;
	void ShowEmpireInfo() ;
};