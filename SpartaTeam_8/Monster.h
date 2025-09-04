#pragma once

#include <string>
#include <iostream>

using namespace std;

class Item;

class Monster
{
private:

public:
	virtual string getName();
	virtual int getHealth();
	virtual int getAttack();
	virtual void takeDamage(int playerDamage); // 데미지를 받는 함수
	virtual Item* dropItem();
};
