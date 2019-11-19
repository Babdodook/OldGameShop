#pragma once
#include"Item.h"

class Weapon : public Item {
public:
	Weapon(string name, string description, int weight, int value, int damage)
		: Item(name, description, weight, value), m_damage(damage) {}

	void Describe() override
	{
		/*
		Name        = Excalibur
		Description = The legendary sword of King Arthur
		Weight      = 12 lbs
		Value       = 1024 gold coins
		Damage      = 24
		*/

		Item::Describe();
		cout << "Damage      = " << m_damage << endl << endl;
	}
private:
	int m_damage;		// µ¥¹ÌÁö
};