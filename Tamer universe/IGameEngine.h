#pragma once
class IGameEngine {
public:
	//запрос команд
	virtual void get_comands() {};
	//отображение меню сохранения/загрузки
	virtual void show_save_load_options() {};
	//бой кораблей и захват планет
	virtual void battle_and_capture() {};
	//показ информации о империи
	virtual void show_empire_info() {};


};