#pragma once

#include "Monster.h"

class BossMonster : public Monster
{
private:
	string name;  // 몬스터 이름
	int health;   // 몬스터 체력
	int attack;   // 몬스처 공격력

public:
	BossMonster(int playerLevel) // 플레이어 레벨 정보가 필요
	{
		name = "BossMonster";
		health = (playerLevel * 20) * 1.5f;  //기존 몬스터의 1.5배 범위를 랜덤으로 설정
		attack = (playerLevel * 5) * 1.5f;  //기존 몬스터의 1.5배 범위를 랜덤으로 설정
	}
	~BossMonster();

	string getName() override;
	int getHealth() override;
	int getAttack() override;
	void takeDamage(int playerDamage) override; // 데미지를 받는 함수
	Item* dropItem() override;
};
