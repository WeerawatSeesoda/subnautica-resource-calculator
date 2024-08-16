#include <format>
#include <iostream>
#include <string>
#include "custom-type.hpp"
#include "show.hpp"

void show(levels lvs) {
	std::cout << formattingOutput(lvs);
}

std::string formattingOutput(levels lvs) {
	std::string level1, level2, level3, level4, level5;
	{
		if (!lvs.at(0).empty()) { level1 = printItemsInTheLevel(1, lvs.at(0)); }
		if (!lvs.at(1).empty()) { level2 = printItemsInTheLevel(2, lvs.at(1)); }
		if (!lvs.at(2).empty()) { level3 = printItemsInTheLevel(3, lvs.at(2)); }
		if (!lvs.at(3).empty()) { level4 = printItemsInTheLevel(4, lvs.at(3)); }
		if (!lvs.at(4).empty()) { level5 = printItemsInTheLevel(5, lvs.at(4)); }
	}

	std::string formated = std::string("") +
		"========================================\n" +
		level1 +
		level2 +
		level3 +
		level4 +
		level5 +
		"========================================\n";
	return formated;
}

std::string printItemsInTheLevel(int level_number, vecofitems items) {
	std::string str = printLevelNumber(level_number);

	for (auto an_item = items.begin(); an_item != items.end(); an_item++) {
		str += std::format("		- {} : {}\n", an_item->name, std::to_string(an_item->number));
	}

	return str;
}

std::string printLevelNumber(int lvl_number) {
	return std::format("Level {}:\n", std::to_string(lvl_number));
}
