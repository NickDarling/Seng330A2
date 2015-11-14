#include "StdAfx.h"
#include "BuyableGrid.h"

BuyableGrid::BuyableGrid(std::string n, int p, int r) {
	name = n;
	price = p;
	rent = r;
}

GridPrototype* BuyableGrid::Clone() {
	return new BuyableGrid(name, price, rent);
}
