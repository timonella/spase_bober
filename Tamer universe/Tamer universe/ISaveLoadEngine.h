#pragma once
class ISaveLoadEngine {
public:
	virtual void CreateXML() {};//������� ������, ���� ��������� �������� XML-����� (Universe.xml) ��� ������ � ������
	virtual void Save() {}; //������� �������������� ������ (��������� ������-���� ������� ��� �������, ���������� �� ������� GameEngine � DataModel) � ����������� xml ����
	virtual void Load() {}; //������� ��������� ������ (��������� ������-���� ������� � �������) � ����������� xml ����
};