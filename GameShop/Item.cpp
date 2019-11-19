#include"Item.h"

Item::Item(string name, string description, int weight, int value)
	: m_name(name), m_description(description), m_weight(weight), m_value(value) 
{

}

void Item::Describe() const
{
	cout << "Name        = " << m_name << endl;
	cout << "Description = " << m_description << endl;
	cout << "Weight      = " << m_weight << endl;
	cout << "Value       = " << m_value << endl;
}

Weapon::Weapon(string name, string description, int weight, int value, int damage)
	: Item(name, description, weight, value), m_damage(damage) 
{

}

void Weapon::Describe() const
{
	Item::Describe();
	cout << "Damage      = " << m_damage << endl << endl;
}

Armor::Armor(string name, string description, int weight, int value, int defense)
	: Item(name, description, weight, value), m_defense(defense) 
{

}

void Armor::Describe() const
{
	Item::Describe();
	cout << "Defense     = " << m_defense << endl << endl;
}

Potion::Potion(string name, string description, int weight, int value, string type, int capacity)
	: Item(name, description, weight, value), m_type(type), m_capacity(capacity) 
{

}

void Potion::Describe() const
{
	Item::Describe();
	cout << "Type        = " << m_type << endl;
	cout << "Capacity    = " << m_capacity << endl << endl;
}

