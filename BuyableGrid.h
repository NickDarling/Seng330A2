// Base class for a buyable grid

#include "GridPrototype.h"

class BuyableGrid: public GridPrototype {

public:
	int price;

	BuyableGrid(std::string n, int p);

	GridPrototype* Clone(); 
};

