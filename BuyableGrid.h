#include "GridPrototype.h"

// A BuyableGrid is a derived class that represents any buyable grid
class BuyableGrid: public GridPrototype {

public:
	int price;	// Cost of the property
	int rent;	// Amount paid if a player lands on this property

	BuyableGrid(std::string n, int p, int r);

	GridPrototype* Clone(); 

	int getPrice();
	int getRent();
};