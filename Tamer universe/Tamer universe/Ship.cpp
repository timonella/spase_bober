#include "Ship.h"

int Ship::GetAttack()
{
    return _attack;
}

int Ship::GetDefense()
{
    return _defense;
}

Ship::Ship(int attack, int defense)
{
    _attack = attack;
    _defense = defense;
}
