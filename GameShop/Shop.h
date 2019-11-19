#pragma once
#include"Item.h"
#include<vector>
#include<memory>

class Shop {
public:
	Shop() {}
	Shop(string name, initializer_list<shared_ptr<Item>> items);
	Shop(string name, string fileName);

	void ShowItemList() const;

private:
	string m_name;						//	상점 이름
	vector<shared_ptr<Item>> m_items;	//	보유 아이템 목록

	string m_filename;
	string m_fileStream;
};