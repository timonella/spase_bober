#pragma once

class IGameEngine {
public:
	//запрос команд
	virtual void GetComands() {};
	//отображение меню загрузки
	virtual void ShowLoadOptions() {};
	//отображение меню сохранения/зашрузки
	virtual void ShowSaveLoadOptions() {};
	//бой кораблей и захват планет
	virtual void BattleAndCapture() {};
	//показ информации о империи
	virtual void ShowEmpireInfo() {};
};
