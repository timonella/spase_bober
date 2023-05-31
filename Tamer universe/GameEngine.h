#pragma once
#include "IGameEngine.h"
class GameEngine :IGameEngine {
public:
	void get_comands();
	void show_save_load_options();
	void battle_and_capture();
	void show_empire_info();
};