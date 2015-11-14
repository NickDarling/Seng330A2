#include "GridPrototype.h"

// A CardGrid is a derived class that represents any card grid (chance or community tile)
class CardGrid: public GridPrototype {

public:
	int type;	// 0 = chance, 1 = community chest

	CardGrid(std::string n, int t);

	GridPrototype* Clone(); 
};

