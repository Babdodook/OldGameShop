#include"Shop.h"

Shop::Shop(string name, initializer_list<shared_ptr<Item>> items)
	: m_name(name)
{
	for (auto& item : items)
	{
		m_items.push_back(item);
	}
}

void Shop::ShowItemList() const
{
	cout << "Welcome to  " << m_name << "!" << endl;
	cout << " - Item List - " << endl;
	for (auto& item : m_items)
	{
		item->Describe();
	}
}