#pragma once
class IDataModel {
public:
	virtual void SaveShip() {};//���������� ��������
	virtual void OrganizationMove() {};//����������� ����
	virtual void CreatShip() {};//�������� ��������
	virtual void FightShip() {};//��� ��������
	virtual void Wincheck() {};//�������� �� ������ � ��� ��������
};

