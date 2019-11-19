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
	string m_name;						//	���� �̸�
	vector<shared_ptr<Item>> m_items;	//	���� ������ ���

	string m_filename;
	string m_fileStream;
};