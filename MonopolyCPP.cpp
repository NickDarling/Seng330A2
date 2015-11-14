#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "GridPrototypeFactory.h"
#include "BuyableGrid.h"
#include "CardGrid.h"
#include "monopoly.pb.h"
#include "gtest/gtest.h"

// Reads all of the buyable properties from the file properties
// Adds one new property based on user input, then writes it back to the same file
int _tmain(int argc, _TCHAR* argv[]) {
	// Run tests
	::testing::InitGoogleTest(&argc, argv);
	cout << "Testing: " << RUN_ALL_TESTS();

	GridPrototypeFactory::initialize();

	GOOGLE_PROTOBUF_VERIFY_VERSION;
	monopoly::AllBuyableGrids allBuyableGrids;

	// Print the existing buyable grids
	string fileName = "data.txt";
    fstream input(fileName);
    if (!input) {
      cout << fileName << ": File not found.  Creating a new file.\n";
    } else if (!allBuyableGrids.ParseFromIstream(&input)) {
      cerr << "Failed to parse.\n";
      return -1;
    }

	// Adding a buyable grid
	std::cout << "Please add one buyable grid.\n";

	std::string name;
	std::cout << "Please enter a name: ";
	std::cin >> name;

	int price;
	std::cout << "Please enter a price: ";
	std::cin >> price;

	int rent;
	std::cout << "Please enter the rent: ";
	std::cin >> rent;

	BuyableGrid* oneGrid = (BuyableGrid*)GridPrototypeFactory::getBuyableGrid();
	oneGrid->name = name;
	oneGrid->price = price;
	oneGrid->rent = rent;

	std::cout << "You created a buyable grid called: " + oneGrid->name << " that costs " << oneGrid->price << " with a rent of " << oneGrid->rent << "\n";
	
	monopoly::BuyableGrid* bg = allBuyableGrids.add_property();
	bg->set_name(name);
	bg->set_price(price);
	bg->set_rent(rent);

	// Write the new buyable grid to disk.
	fstream output(fileName);
    if (!allBuyableGrids.SerializeToOstream(&output)) {
      cerr << "Failed to write.\n";
      return -1;
    }

	std::cout << "Done \n";
	return 0;
}