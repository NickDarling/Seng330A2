#include "stdafx.h"
#include <string>
#include <iostream>

#include "GridPrototypeFactory.h"
#include "BuyableGrid.h"
#include "CardGrid.h"

int _tmain(int argc, _TCHAR* argv[]) {
	GridPrototypeFactory::initialize();

	std::string type;
	std::cout << "Please select a type 'buyable' or 'card':";
	std::cin >> type;

	if (type.compare("buyable") == 0) {
		std::cout << "You chose to create a buyable grid\n";

		std::string name;
		std::cout << "Please enter a name: ";
		std::cin >> name;

		int price;
		std::cout << "Please enter a price: ";
		std::cin >> price;

		BuyableGrid* object = (BuyableGrid*)GridPrototypeFactory::getBuyableGrid();
		object->name = name;
		object->price = price;

		std::cout << "You created a buyable grid called: " + object->name << " that costs " << object->price << "\n";
	} else if (type.compare("card") == 0) {
		std::cout << "You chose to create a card grid\n";

		std::string name;
		std::cout << "Please enter a name for your grid: ";
		std::cin >> name;

		std::string cardType;
		std::cout << "Please enter the type of cards for this grid ('chance' or 'comchest'): ";
		std::cin >> cardType;

		if (cardType.compare("chance") == 0) {
			CardGrid* object = (CardGrid*)GridPrototypeFactory::getChanceGrid();
			object->name = name;
			std::cout << "You created a chance grid called: " + object->name;
		} else if (cardType.compare("comchest") == 0) {
			CardGrid* object = (CardGrid*)GridPrototypeFactory::getComChestGrid();
			object->name = name;

			std::cout << "You created a community chest grid called: " + object->name;
		} else {
			std::cout << "Error: incorrect input please try again";
		}
	} else {
		std::cout << "Error: incorrect input please try again";
	}

	std::cout << "\n";
	return 0;
}

