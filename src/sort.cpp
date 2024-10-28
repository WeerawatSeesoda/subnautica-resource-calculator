#include "sort.hpp"
#include "custom-type.hpp"
#include <algorithm> // std::sort

levels sorting(vecofitems all_items) {

	removeDuplication(all_items);
	sortByName(all_items);
	all_levels sorting_items = sortByLevel(all_items);

	levels sorted_items;
	sorted_items.push_back(sorting_items.level1);
	sorted_items.push_back(sorting_items.level2);
	sorted_items.push_back(sorting_items.level3);
	sorted_items.push_back(sorting_items.level4);
	sorted_items.push_back(sorting_items.level5);

	return sorted_items;
}

// Implementation detail {
all_levels sortByLevel(vecofitems& all_items) {
	all_levels sorting_items;
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

void sortByName(vecofitems& items) {
	if (!items.empty()) {
		std::sort(items.begin(), items.end(), [](item a, item b) { return a.name < b.name; });
	}
}

void removeDuplication(vecofitems& items) {
	vecofitems unique_items;

	for (auto the_messy_item = items.begin(); the_messy_item != items.end(); the_messy_item++) {
		bool isNotDuplicate = false;

		for (auto the_unique_item = unique_items.begin(); the_unique_item != unique_items.end(); the_unique_item++) {
			if (the_messy_item->name == the_unique_item->name) {
				the_unique_item->number += the_messy_item->number;
				isNotDuplicate = true;
				break;
			}
		}
		if (!isNotDuplicate) {
			unique_items.push_back(*the_messy_item);
		}
	}
	items = unique_items;
}
// } Implementation detail
