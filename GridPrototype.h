#pragma once
#include <string>

class GridPrototype {

public:
	std::string name;

	virtual GridPrototype* Clone() = 0;

	std::string getName();
};

