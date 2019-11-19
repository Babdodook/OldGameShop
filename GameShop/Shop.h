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
	string m_name;						//	상점 이름
	vector<shared_ptr<Item>> m_items;	//	보유 아이템 목록
};