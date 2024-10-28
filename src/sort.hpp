#pragma once
#include "custom-type.hpp"

levels sorting(vecofitems);

// Implementation detail {
struct all_levels {
	vecofitems level1;
	vecofitems level2;
	vecofitems level3;
	vecofitems level4;
	vecofitems level5;
};

all_levels sortByLevel(vecofitems&);
void sortByName(vecofitems&);
void removeDuplication(vecofitems&);
// }
