#pragma once
#include "GridPrototype.h"

// This factory creates GridPrototype objects by cloning existing prototypes
class GridPrototypeFactory {

private:
	static GridPrototype* buyableGridPrototype;
	static GridPrototype* chanceGridPrototype;
	static GridPrototype* comChestGridPrototype;

public:
	static void initialize();

	static GridPrototype* getBuyableGrid();
	static GridPrototype* getChanceGrid();
	static GridPrototype* getComChestGrid();
};

