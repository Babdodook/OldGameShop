#pragma once
#include"basics.h"

class Item {
public:
	Item(string name, string description, int weight, int value);
	virtual ~Item() = default;

	virtual void Describe() const;
private:
	string m_name;			// �̸�
	string m_description;	// ����
	int m_weight;			// ����
	int m_value;			// ����
};



class Weapon : public Item {
public:
	Weapon(string name, string description, int weight, int value, int damage);
	virtual ~Weapon() = default;

	void Describe() const override;
private:
	int m_damage;		// ������
};



class Armor : public Item {
public:
	Armor(string name, string description, int weight, int value, int defense);
	virtual ~Armor() = default;

	void Describe() const override;
private:
	int m_defense;		// ����
};



class Potion : public Item {
public:
	Potion(string name, string description, int weight, int value, string type, int capacity);
	virtual ~Potion() = default;

	void Describe() const override;
private:
	string m_type;		// ���� Ÿ�� (HP/MP ��)
	int m_capacity;		// ȸ����
};