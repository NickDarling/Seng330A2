#include "StdAfx.h"
#include "GridPrototypeFactory.h"
#include "BuyableGrid.h"
#include "CardGrid.h"
#include <string>
#include <iostream>

GridPrototype* GridPrototypeFactory::buyableGridPrototype;
GridPrototype* GridPrototypeFactory::chanceGridPrototype;
GridPrototype* GridPrototypeFactory::comChestGridPrototype;

void GridPrototypeFactory::initialize() {
	buyableGridPrototype = new BuyableGrid("Park Place", 350);
	chanceGridPrototype = new CardGrid("Chance Grid", 0);
	comChestGridPrototype = new CardGrid("Community Chest Grid", 1);
}

GridPrototype* GridPrototypeFactory::getBuyableGrid() {
	std::cout << "Cloning buyable grid\n";
	return buyableGridPrototype->Clone();
}

GridPrototype* GridPrototypeFactory::getChanceGrid() {
	std::cout << "Cloning chance card grid\n";
	return chanceGridPrototype->Clone();
}

GridPrototype* GridPrototypeFactory::getComChestGrid() {
	std::cout << "Cloning community chest card grid\n";
	return comChestGridPrototype->Clone();
}