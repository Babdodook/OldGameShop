#pragma once
#include"Item.h"
#include<fstream>
#include<vector>
#include<memory>

#include"Player.h"

class Shop {
public:
	Shop() {}
	Shop(string name, initializer_list<shared_ptr<Item>> items);
	Shop(string name, string fileName);
	~Shop();

	void ShowItemList() const;
	void ReadDataFromFile();
	void ShowShopMessage(Player& player) const;
	void ShowBuyMessage(Player& player) const;

	void BuyItem(Player& player, int index) const;
private:
	string m_name;						//	���� �̸�
	vector<shared_ptr<Item>> m_items;	//	���� ������ ���

	string m_fileName;					//	���� �̸�
	ifstream m_fileStream;				//	�Է� ���� ��Ʈ�� �̸�
};