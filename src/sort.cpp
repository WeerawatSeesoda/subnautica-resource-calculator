#include "sort.hpp"
#include "custom-type.hpp"
#include <algorithm> // std::sort

levels sorting(vecofitems all_items) {

	removeDuplicationInTheLevel(all_items);
	sortingByName(all_items);
	struct all_levels sorting_items = sortingByLevel(all_items);

	levels sorted_items;
	sorted_items.push_back(sorting_items.level1);
	sorted_items.push_back(sorting_items.level2);
	sorted_items.push_back(sorting_items.level3);
	sorted_items.push_back(sorting_items.level4);
	sorted_items.push_back(sorting_items.level5);

	return sorted_items;
}

// Implementation detail {
struct all_levels sortingByLevel(vecofitems& all_items) {
	struct all_levels sorting_items;
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
	return sorting_items;
}

void sortingByName(vecofitems& items) {
	if (!items.empty()) {
		std::sort(items.begin(), items.end(), [](item a, item b) { return a.name < b.name; });
	}
}

void removeDuplicationInTheLevel(vecofitems& level_x) {
	vecofitems buffer;

	for (auto i_level_x = level_x.begin(); i_level_x != level_x.end(); i_level_x++) {
		bool isNotDuplicate = false;

		for (auto i_buffer = buffer.begin(); i_buffer != buffer.end(); i_buffer++) {
			if (i_level_x->name == i_buffer->name) {
				i_buffer->number += i_level_x->number;
				isNotDuplicate = true;
				break;
			}
		}
		if (!isNotDuplicate) {
			buffer.push_back(*i_level_x);
		}
	}
	level_x = buffer;
}
// } Implementation detail
