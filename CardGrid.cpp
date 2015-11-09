#include "StdAfx.h"
#include "CardGrid.h"

CardGrid::CardGrid(std::string n, int t) {
	name = n;
	type = t;
}

GridPrototype* CardGrid::Clone() {
	return new CardGrid(name, type);
}