#pragma once
#include <string>

// The base class for any grid
class GridPrototype {

public:
	std::string name;		// The name of the grid

	virtual GridPrototype* Clone() = 0;

	std::string getName();
};

