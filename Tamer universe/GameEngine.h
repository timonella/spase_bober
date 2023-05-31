#pragma once
#include "IGameEngine.h"
class GameEngine :IGameEngine {
public:
	void GetCommands();
	void ShowSaveLoadMenu();
	void BattleAndCapture();
	void ShowEmpireInfo();
};