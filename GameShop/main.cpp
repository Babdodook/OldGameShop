#include"Shop.h"
#include"Player.h"

int main()
{
	Shop weaponArmorShop = Shop("Weapon/Armor Shop", "equip_item.txt");
	Shop potionShop = Shop("Potion Shop", "potion_item.txt");
	Player player = Player();

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
			weaponArmorShop.ShowShopMessage();
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