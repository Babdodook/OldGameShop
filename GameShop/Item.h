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
	string m_name;			// 이름
	string m_description;	// 설명
	int m_weight;			// 무게
	int m_value;			// 가격
};