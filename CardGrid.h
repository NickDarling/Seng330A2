// Base class for a buyable grid

#include "GridPrototype.h"

class CardGrid: public GridPrototype {

public:
	int type;	// 0 = chance, 1 = community chest

	CardGrid(std::string n, int t);

	GridPrototype* Clone(); 
};

