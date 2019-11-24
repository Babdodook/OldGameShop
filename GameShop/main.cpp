#include"Shop.h"

int main()
{
	Shop *weaponArmorShop = new Shop("Weapon/Armor Shop", "equip_item.txt");
	Shop *potionShop = new Shop("Potion Shop", "potion_item.txt");

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
			weaponArmorShop->ShowItemList();
			break;
		case 2:
			system("cls");
			potionShop->ShowItemList();
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