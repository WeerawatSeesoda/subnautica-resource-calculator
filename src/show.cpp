#include "show.hpp"
#include "custom-type.hpp"
#include "paint-text.hpp"
#include <format>
#include <iostream>
#include <string>

void show(levels lvs) {
	std::cout << formattingOutput(lvs);
}

std::string formattingOutput(levels lvs) {
	std::string level1, level2, level3, level4, level5;
	{
		if (!lvs.at(0).empty()) {
			level1 = printItemsInTheLevel(1, lvs.at(0));
		}
		if (!lvs.at(1).empty()) {
			level2 = printItemsInTheLevel(2, lvs.at(1));
		}
		if (!lvs.at(2).empty()) {
			level3 = printItemsInTheLevel(3, lvs.at(2));
		}
		if (!lvs.at(3).empty()) {
			level4 = printItemsInTheLevel(4, lvs.at(3));
		}
		if (!lvs.at(4).empty()) {
			level5 = printItemsInTheLevel(5, lvs.at(4));
		}
	}

	std::string formatted = std::string("") +
							"========================================\n" +
							level1 +
							level2 +
							level3 +
							level4 +
							level5 +
							"========================================\n" +
							"\n";
	return formatted;
}

// Implementation detail {
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
// }

void showInstruction() {
	const char* str = R"V0G0N(
Instruction: Enter the item's name and its quantity.
  or enter:
    "help" - To show this instruction again.
    "done" - To start the calculation and show the crafting steps you need to do.
    "exit" - To close the program.
    "list" - To show all the wait to calculate list.
    "clear" - To delete all the wait to calculate list.

)V0G0N";
	std::cout << str;
}

void showHelp() {
	const char* str = R"V0G0N(
Usage:  subrescal [name] [amount]
        subrescal [option]
Option:
    -h, --help, help        Print this help messages.
    -v, --version           Print version number.

Examples:
    subrescal Battery 1
    subrescal "Power Cell" 69
)V0G0N";
	std::cout << str;
}

