#include <algorithm> // std::sort
#include "custom-type.hpp"
#include "sort.hpp"

vecofitems eliminateDuplication(vecofitems level_x);

// sort by level then sort by name
levels sorting(vecofitems all_items) {
	vecofitems level1;
	vecofitems level2;
	vecofitems level3;
	vecofitems level4;
	vecofitems level5;

	// grouping
	if (!all_items.empty()) {
		for (auto i = all_items.begin(); i != all_items.end(); i++) {
			switch (i->level) {
			case '1':
				level1.push_back(*i);
				break;
			case '2':
				level2.push_back(*i);
				break;
			case '3':
				level3.push_back(*i);
				break;
			case '4':
				level4.push_back(*i);
				break;
			case '5':
				level5.push_back(*i);
				break;
			default:
				break;
			}
		}
	}

	// duplicate elimination
	if (!level1.empty()) {
		level1 = eliminateDuplication(level1);
	}
	if (!level2.empty()) {
		level2 = eliminateDuplication(level2);
	}
	if (!level3.empty()) {
		level3 = eliminateDuplication(level3);
	}
	if (!level4.empty()) {
		level4 = eliminateDuplication(level4);
	}
	if (!level5.empty()) {
		level5 = eliminateDuplication(level5);
	}

	// sorting
	if (!level1.empty()) {
		std::sort(level1.begin(), level1.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!level2.empty()) {
		std::sort(level2.begin(), level2.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!level3.empty()) {
		std::sort(level3.begin(), level3.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!level4.empty()) {
		std::sort(level4.begin(), level4.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!level5.empty()) {
		std::sort(level5.begin(), level5.end(), [](item a, item b) {return a.name < b.name; });
	}

	levels lvs;
	lvs.push_back(level1);
	lvs.push_back(level2);
	lvs.push_back(level3);
	lvs.push_back(level4);
	lvs.push_back(level5);

	return lvs;
}

vecofitems eliminateDuplication(vecofitems level_x) {
	vecofitems buffer;

	for (auto x = level_x.begin(); x != level_x.end(); x++) {
		bool isNotDuplicate = false;

		for (auto b = buffer.begin(); b != buffer.end(); b++) {
			if (x->name == b->name) {
				b->number += x->number;
				//level_x.erase(x);
				isNotDuplicate = true;
				break;
			}
		}
		if (!isNotDuplicate) {
			buffer.push_back(*x);
		}
	}
	return buffer;
}

