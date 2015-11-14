#pragma once
#include "StdAfx.h"
#include "gtest/gtest.h"
#include "BuyableGrid.h"
#include "GridPrototype.h"

using namespace std;

// Tests constructor method
TEST (BuyableGrid, Constructor) {
	string name = "Boardwalk";
	int price = 400;
	int rent = 50;

	BuyableGrid* bg = new BuyableGrid(name, price, rent);
	EXPECT_EQ(bg->getName(), name);
	EXPECT_EQ(bg->getPrice(), price);
	EXPECT_EQ(bg->getRent(), rent);
}

// Tests clone method
TEST (BuyableGrid, Clone) {
	string name = "Boardwalk";
	int price = 400;
	int rent = 50;

	GridPrototype* bg1 = new BuyableGrid(name, price, rent);
	GridPrototype* bg2 = bg1->Clone();

	EXPECT_NE(bg1, bg2);
}