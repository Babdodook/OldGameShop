#pragma once

class Player {
public:
	Player() : m_gold(20) {}
	Player(int gold) : m_gold(gold) {}

	int GetGold() const;
	void SetGold(int gold);
private:
	int m_gold;		//	플레이어가 소유한 골드

};