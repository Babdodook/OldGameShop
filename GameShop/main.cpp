#include"Shop.h"

int main()
{
	Shop weaponArmorShop = Shop(
		"Weapon/Armor Shop",
		{
			make_shared<Weapon>("Sword", "Medium DMG", 3, 10, 10),
			make_shared<Armor>("Cap", "Light Armor", 1, 5, 5),
			make_shared<Armor>("Gloves", "Light Armor", 1, 5, 5),
			make_shared<Weapon>("Axe", "High DMG", 5, 1, 1),
			make_shared<Armor>("Boots", "Light Armor", 1, 5, 5)
		}
	);

	Shop potionShop = Shop(
		"Potion Shop",
		{
			make_shared<Potion>("Small Health Potion", "Recovery 100 HP", 2, 5, "Health", 100),
			make_shared<Potion>("Small Mana Potion", "Recovery 50 MP", 1, 30, "Mana", 50),
			make_shared<Potion>("Medium Health Potion", "Recovery 200 HP", 4, 120, "Health", 200),
			make_shared<Potion>("Medium Mana Potion", "Recovery 100 MP", 2, 75, "Mana", 100),
			make_shared<Potion>("Large Health Potion", "Recovery 300 HP", 6, 200, "Health", 300)
		}
	);

	int inputIndex = 0;
	while (true)
	{
		cout << " - Shop Select - " << endl;
		cout << "   1. Weapon/Armor Shop" << endl;
		cout << "   2. Potion Shop" << endl;
		cout << "   3. Exit" << endl;
		cout << endl;

		cout << "Select : ";
		cin >> inputIndex;

		switch (inputIndex) {
		case 1:
			system("cls");
			weaponArmorShop.ShowItemList();
			break;
		case 2:
			system("cls");
			potionShop.ShowItemList();
			break;
		case 3:
			exit(0);
			break;
		default:
			system("cls");
			cout << "Invalid number! Try again." << endl << endl;
			break;
		}
	}

	system("pause");
	return 0;
}