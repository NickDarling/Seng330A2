#include "StdAfx.h"
#include "BuyableGrid.h"

BuyableGrid::BuyableGrid(std::string n, int p) {
	name = n;
	price = p;
}

GridPrototype* BuyableGrid::Clone() {
	return new BuyableGrid(name, price);
}
