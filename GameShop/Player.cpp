#include"basics.h"
#include"Player.h"


Player::Player() 
	: m_gold(20) 
{

}

Player::Player(int gold)
	: m_gold(gold) 
{

}

int Player::GetGold() const
{
	return m_gold;
}

void Player::SetGold(int gold)
{
	m_gold = gold;
}