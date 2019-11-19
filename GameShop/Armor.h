#pragma once
#include"Item.h"

class Armor : public Item {
public:
	Armor(string name, string description, int weight, int value, int defense)
		: Item(name, description, weight, value), m_defense(defense) {}

	void Describe() override
	{
		Item::Describe();
		cout << "Defense     = " << m_defense << endl << endl;
	}
private:
	int m_defense;		// ¹æ¾î·Â
};