// Base class for a buyable grid

#include "GridPrototype.h"

class BuyableGrid: public GridPrototype {

public:
	int price;
	int rent;

	BuyableGrid(std::string n, int p, int r);

	GridPrototype* Clone(); 
};

