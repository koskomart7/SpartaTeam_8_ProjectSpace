#pragma once

#include "Monster.h"

class Troll : public Monster
{
private:
	string name;  // 몬스터 이름
	int health;   // 몬스터 체력
	int attack;   // 몬스처 공격력

public:
	Troll(int playerLevel) // 플레이어 레벨 정보가 필요
	{
		name = "Orc";
		health = playerLevel * 20;  //-체력: (레벨 × 20) ~(레벨 × 30)
		attack = playerLevel * 5;  //- 공격력 : (레벨 × 5) ~(레벨 × 10)
	}
	~Troll();

	string getName() override;
	int getHealth() override;
	int getAttack() override;
	void takeDamage(int playerDamage) override; // 데미지를 받는 함수
	Item* dropItem() override;
};
