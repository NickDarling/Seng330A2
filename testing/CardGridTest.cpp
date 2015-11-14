#pragma once
#include "StdAfx.h"
#include "gtest/gtest.h"
#include "CardGrid.h"
#include "GridPrototype.h"

using namespace std;

// Tests constructor method
TEST (CardGrid, Constructor) {
	string name = "Chance Grid 1";
	int type = 0;

	CardGrid* cg = new CardGrid(name, type);

	EXPECT_EQ(cg->getName(), name);
	EXPECT_EQ(cg->getType(), type);
}

// Tests clone method
TEST (BuyableGrid, Clone) {
	string name = "Community Chest Grid 1";
	int type = 1;

	GridPrototype* cg1 = new CardGrid(name, type);
	GridPrototype* cg2 = cg1->Clone();

	EXPECT_NE(cg1, cg2);
}