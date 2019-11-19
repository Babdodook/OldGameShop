#pragma once
#include"basics.h"

class Item {
public:
	Item(string name, string description, int weight, int value);
	virtual ~Item() = default;

	virtual void Describe() const;
private:
	string m_name;			// 이름
	string m_description;	// 설명
	int m_weight;			// 무게
	int m_value;			// 가격
};



class Weapon : public Item {
public:
	Weapon(string name, string description, int weight, int value, int damage);
	virtual ~Weapon() = default;

	void Describe() const override;
private:
	int m_damage;		// 데미지
};



class Armor : public Item {
public:
	Armor(string name, string description, int weight, int value, int defense);
	virtual ~Armor() = default;

	void Describe() const override;
private:
	int m_defense;		// 방어력
};



class Potion : public Item {
public:
	Potion(string name, string description, int weight, int value, string type, int capacity);
	virtual ~Potion() = default;

	void Describe() const override;
private:
	string m_type;		// 포션 타입 (HP/MP 등)
	int m_capacity;		// 회복량
};