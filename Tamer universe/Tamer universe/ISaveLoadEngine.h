#pragma once
class ISaveLoadEngine {
public:
	virtual void Save() {}; //������� �������������� ������ (��������� ������-���� ������� ��� �������, ���������� �� ������� GameEngine � DataModel) � ����������� xml ����
	virtual void Load() {}; //������� ��������� ������ (��������� ������-���� ������� � �������) � ����������� xml ����
};