#include<iostream>
#include<string>
#include<fstream>

#include"Shop.h"

Shop::Shop(string name, initializer_list<shared_ptr<Item>> items)
	: m_name(name)
{
	for (auto& item : items)
	{
		m_items.push_back(item);
	}
}

Shop::Shop(string name, string fileName)
	: m_name(name), m_fileName(fileName)
{
	m_fileStream.open(m_fileName);

	if (!m_fileStream.is_open())
	{
		cout << "파일을 찾을 수 없습니다" << endl;
		throw bad_exception();
	}

	ReadDataFromFile();
}

Shop::~Shop()
{
	m_fileStream.close();
}

void Shop::ShowItemList() const
{
	int itemIdx = 0;

	cout << " - Item List - " << endl;
	for (auto& item : m_items)
	{
		cout << "No. " << (itemIdx++) + 1 << endl;
		item->Describe();
	}
}

void Shop::ReadDataFromFile()
{
	string data = "";	// 읽을 내용

	while (getline(m_fileStream, data))
	{
		string splitStr = data;
		string type, name, description;
		int weight, value;

		splitStr = splitStr.substr(splitStr.find("\"") + 1);
		type = splitStr.substr(0, splitStr.find("\""));
		splitStr = splitStr.substr(splitStr.find("\"") + 1);
		
		splitStr = splitStr.substr(splitStr.find("\"") + 1);
		name = splitStr.substr(0, splitStr.find("\""));
		splitStr = splitStr.substr(splitStr.find("\"") + 1);

		splitStr = splitStr.substr(splitStr.find("\"") + 1);
		description = splitStr.substr(0, splitStr.find("\""));
		splitStr = splitStr.substr(splitStr.find("\"") + 1);

		splitStr = splitStr.substr(1);

		weight = atoi(splitStr.substr(0, splitStr.find(" ")).c_str());
		splitStr = splitStr.substr(splitStr.find(" ") + 1);
		value = atoi(splitStr.substr(0, splitStr.find(" ")).c_str());
		splitStr = splitStr.substr(splitStr.find(" ") + 1);

		if (type == "Weapon")
		{
			int damage = atoi(splitStr.c_str());

			m_items.push_back(make_shared<Weapon>(name, description, weight, value, damage));
		}
		else if (type == "Armor")
		{
			int defense = atoi(splitStr.c_str());

			m_items.push_back(make_shared<Armor>(name, description, weight, value, defense));
		}
		else if (type == "Potion")
		{
			int damage = atoi(splitStr.c_str());

			splitStr = splitStr.substr(splitStr.find("\"") + 1);
			string potionType = splitStr.substr(0, splitStr.find("\""));
			splitStr = splitStr.substr(splitStr.find("\"") + 1);
			int capacity = atoi(splitStr.c_str());

			m_items.push_back(make_shared<Potion>(name, description, weight, value, potionType, capacity));
		}
		else
		{
			throw bad_exception();
		}
	}
}

void Shop::ShowShopMessage(Player& player) const
{
	int inputIndex = 0;

	while (true)
	{
		cout << "Welcome to " << m_name << "!" << endl;
		cout << "-----------------------------" << endl;
		cout << "1. Show Item List" << endl;
		cout << "2. Buy Item" << endl;
		cout << "2. Exit" << endl;
		cout << endl;

		cout << "Select : ";
		cin >> inputIndex;

		switch (inputIndex) {
		case 1:
			ShowItemList();
			break;
		case 2:
			ShowBuyMessage(player);
			break;
		default:
			cout << "Error: Invalid number, please input again." << endl;
			break;
		}
	}
}

void Shop::ShowBuyMessage(Player& player) const
{
	int index = 0;
	cout << "Which item to buy? (1 ~ 5, 0: Exit) ";
	cin >> index;
}

void Shop::BuyItem(Player& player, int index) const
{
	m_items[index]
}