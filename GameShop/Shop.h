#pragma once
#include"Item.h"

class Shop {
public:
	Shop() {}
	Shop(string name, initializer_list<shared_ptr<Item>> items)
		: m_name(name), m_items(items) {}

	void ShowItemList()
	{
	}
private:
	string m_name;						//	���� �̸�
	vector<shared_ptr<Item>> m_items;	//	���� ������ ���
};