#pragma once
#include"Item.h"

class Potion : Item {
public:
	Potion(string name, string description, int weight, int value, string type, int capacity)
		: Item(name, description, weight, value), m_type(type), m_capacity(capacity) {}

	void Describe() override
	{
		Item::Describe();
		cout << "Type        = " << m_type << endl;
		cout << "Capacity    = " << m_capacity << endl << endl;
	}
private:
	string m_type;		// 포션 타입 (HP/MP 등)
	int m_capacity;		// 회복량
};