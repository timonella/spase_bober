#pragma once
class IDataModel {
public:
	virtual void SaveShip() {};//сохранение кораблей
	virtual void OrganizationMove() {};//организация хода
	virtual void CreatShip() {};//создание кораблей
	virtual void FightShip() {};//бой кораблей
	virtual void Wincheck() {};//проверка на победу в бою кораблей
};

