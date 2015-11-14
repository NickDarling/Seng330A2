#pragma once
#include "StdAfx.h"
#include "gtest/gtest.h"
#include "CardGrid.h"
#include "BuyableGrid.h"
#include "GridPrototypeFactory.h"

using namespace std;

// Tests factory constructor method
TEST (GridPrototypeFactory, Constructor) {
	// Buyable Grid
	string name = "Park Place";
	int price = 350;
	int rent = 0;

	BuyableGrid* bg = (BuyableGrid*)GridPrototypeFactory::getBuyableGrid();

	EXPECT_EQ(bg->getName(), name);
	EXPECT_EQ(bg->getPrice(), price);
	EXPECT_EQ(bg->getRent(), rent);

	// Card Grid
	string name = "Community Chest Grid 1";
	int type = 1;

	CardGrid* cg = (CardGrid*)GridPrototypeFactory::getComChestGrid();

	EXPECT_EQ(cg->getName(), name);
	EXPECT_EQ(cg->getType(), type);
}

// Tests factory clone method
TEST (GridPrototypeFactory, Clone) {
	BuyableGrid* bg1 = (BuyableGrid*)GridPrototypeFactory::getBuyableGrid();
	BuyableGrid* bg2 = (BuyableGrid*)GridPrototypeFactory::getBuyableGrid();
	EXPECT_NE(bg1, bg2);

	CardGrid* cg1 = (CardGrid*)GridPrototypeFactory::getChanceGrid();
	CardGrid* cg2 = (CardGrid*)GridPrototypeFactory::getChanceGrid();
	EXPECT_NE(cg1, cg2);
}