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

struct all_levels sortingByLevel(vecofitems&);
void sortingByName(vecofitems&);
void removeDuplicationInTheLevel(vecofitems&);
// }
