#pragma once
class IDataModel {
public:
	virtual void SavingCommandExecution() {};//сохранение и выполнение команд
	virtual void OrganizationMove() {};//организация хода
};

