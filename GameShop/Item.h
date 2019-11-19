#pragma once
#include"basics.h"

class Item {
public:
	Item(string name, string description, int weight, int value)
		: m_name(name), m_description(description), m_weight(weight), m_value(value) {}

	virtual void Describe() 
	{
		cout << "Name        = " << m_name << endl;
		cout << "Description = " << m_description << endl;
		cout << "Weight      = " << m_weight << endl;
		cout << "Value       = " << m_value << endl;
	}
private:
	string m_name;			// �̸�
	string m_description;	// ����
	int m_weight;			// ����
	int m_value;			// ����
};