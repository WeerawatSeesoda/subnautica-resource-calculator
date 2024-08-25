#pragma once
#include "custom-type.hpp"

// sort by level then sort by name
levels sorting(vecofitems);

// Implementation detail {
struct all_levels {
	vecofitems level1;
	vecofitems level2;
	vecofitems level3;
	vecofitems level4;
	vecofitems level5;
};

void sortingByLevel(vecofitems&, struct all_levels&);
void sortingByName(struct all_levels&);
void removeAllDuplication(struct all_levels&);
vecofitems removeDuplicationInTheLevel(vecofitems);
// }
