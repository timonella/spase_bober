#pragma once
class Ship
{
private:
	int _attack;
	int _defense;
public:
	int GetAttack();
	int GetDefense();

	Ship(int attack, int defense);
};

