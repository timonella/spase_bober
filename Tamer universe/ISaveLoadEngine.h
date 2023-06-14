#pragma once
class ISaveLoadEngine {
public:
	virtual void CreateXML() {};//функция создаёт и заполняет, либо сбрасывает до по умолчанию XML-файл (Universe.xml)
	virtual void Save() {}; //функция перезаписывает данные (состояние какого-либо корабля или планеты, полученные от классов GameEngine и DataModel) в приложенный xml файл
	virtual void Load() {}; //функция выгружает данные (состояние какого-либо корабля и планеты) в приложенный xml файл
};