#include <algorithm> // std::sort
#include "custom-type.hpp"
#include "sort.hpp"

levels sorting(vecofitems all_items) {
	struct all_levels sorting_items;

	sortingByLevel(all_items, sorting_items);
	removeAllDuplication(sorting_items);
	sortingByName(sorting_items);

	levels sorted_items;
	sorted_items.push_back(sorting_items.level1);
	sorted_items.push_back(sorting_items.level2);
	sorted_items.push_back(sorting_items.level3);
	sorted_items.push_back(sorting_items.level4);
	sorted_items.push_back(sorting_items.level5);

	return sorted_items;
}


void sortingByLevel(vecofitems& all_items, struct all_levels& sorting_items) {
	if (!all_items.empty()) {
		for (auto i = all_items.begin(); i != all_items.end(); i++) {
			switch (i->level) {
			case '1':
				sorting_items.level1.push_back(*i);
				break;
			case '2':
				sorting_items.level2.push_back(*i);
				break;
			case '3':
				sorting_items.level3.push_back(*i);
				break;
			case '4':
				sorting_items.level4.push_back(*i);
				break;
			case '5':
				sorting_items.level5.push_back(*i);
				break;
			default:
				break;
			}
		}
	}
}

void removeAllDuplication(struct all_levels& sorting_items) {
	if (!sorting_items.level1.empty()) {
		sorting_items.level1 = removeDuplicationInTheLevel(sorting_items.level1);
	}
	if (!sorting_items.level2.empty()) {
		sorting_items.level2 = removeDuplicationInTheLevel(sorting_items.level2);
	}
	if (!sorting_items.level3.empty()) {
		sorting_items.level3 = removeDuplicationInTheLevel(sorting_items.level3);
	}
	if (!sorting_items.level4.empty()) {
		sorting_items.level4 = removeDuplicationInTheLevel(sorting_items.level4);
	}
	if (!sorting_items.level5.empty()) {
		sorting_items.level5 = removeDuplicationInTheLevel(sorting_items.level5);
	}
}

void sortingByName(struct all_levels& sorting_items) {
	if (!sorting_items.level1.empty()) {
		std::sort(sorting_items.level1.begin(), sorting_items.level1.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!sorting_items.level2.empty()) {
		std::sort(sorting_items.level2.begin(), sorting_items.level2.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!sorting_items.level3.empty()) {
		std::sort(sorting_items.level3.begin(), sorting_items.level3.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!sorting_items.level4.empty()) {
		std::sort(sorting_items.level4.begin(), sorting_items.level4.end(), [](item a, item b) {return a.name < b.name; });
	}
	if (!sorting_items.level5.empty()) {
		std::sort(sorting_items.level5.begin(), sorting_items.level5.end(), [](item a, item b) {return a.name < b.name; });
	}
}

vecofitems removeDuplicationInTheLevel(vecofitems level_x) {
	vecofitems buffer;

	for (auto i_level_x = level_x.begin(); i_level_x != level_x.end(); i_level_x++) {
		bool isNotDuplicate = false;

		for (auto i_buffer = buffer.begin(); i_buffer != buffer.end(); i_buffer++) {
			if (i_level_x->name == i_buffer->name) {
				i_buffer->number += i_level_x->number;
				//level_x.erase(x);
				isNotDuplicate = true;
				break;
			}
		}
		if (!isNotDuplicate) {
			buffer.push_back(*i_level_x);
		}
	}
	return buffer;
}
