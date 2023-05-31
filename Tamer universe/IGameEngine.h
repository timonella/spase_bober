#pragma once
class IGameEngine {
public:

	
	virtual void get_comands() {};
	virtual void show_save_load_options() {}; 
	virtual void battle_and_capture() {}; 
	virtual void show_empire_info() {};

};