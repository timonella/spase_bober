#pragma once
class ISaveLoadEngine {
public:
	virtual void Save() {}; //функция перезаписывает данные (состояние какого-либо корабля или планеты, полученные от классов GameEngine и DataModel) в приложенный xml файл
	virtual void Load() {}; //функция выгружает данные (состояние какого-либо корабля и планеты) в приложенный xml файл
};