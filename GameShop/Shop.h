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
	string m_name;						//	상점 이름
	vector<shared_ptr<Item>> m_items;	//	보유 아이템 목록

	string m_fileName;					//	파일 이름
	ifstream m_fileStream;				//	입력 파일 스트림 이름
};