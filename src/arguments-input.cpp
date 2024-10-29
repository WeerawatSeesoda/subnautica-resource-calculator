#include "arguments-input.hpp"
#include "../src/custom-type.hpp"
#include "calculation.hpp"
#include "input.hpp"
#include "libs.hpp"
#include "paint-text.hpp"
#include "show.hpp"
#include "sort.hpp"
#include "version.hpp"
#include <iostream>
#include <string>

bool isItemFound(vecofitems&);

name_amount_pair argumentsInput(const int argc, const char* argv[]) {
	std::string name = argv[1];
	if (argc == 2) {
		if ((name == "--version") ||
			(name == "-v")) {
			return { showVersion(), 0 };
		}

		if ((name == "--help") ||
			(name == "-h") ||
			(name == "help")) {
			return { showHelp(), 0 };
		}

		return { showInvalidCommand(), 1 };
	}
	if (argc == 3) {
		int amount = convertStringToNumber(argv[2]);

		if (amount == -1) {
			return { showInvalidCommand(), 1 };
		}

		if (amount < 1) {
			return { red("Error: The item amount must larger than 0.\n"), 1 };
		}

		vecofitems all_items;
		levels all_levels;
		name_amount_pair input = { name, amount };

		vecofitems calculated = calculating(input);

		if (not isItemFound(calculated)) {
			return { calculated[0].name, 1 };
		}

		insertvector(all_items, calculating(input));
		std::cout << "Calculating...\n";
		all_levels = sorting(all_items);
		show(all_levels);
		return { "", 0 };
	}

	return { showInvalidCommand(), 1 };
}

// Implementation detail {
bool isItemFound(vecofitems& calculated) {
	if (calculated[0].level == '0') {
		return false;
	}
	return true;
}

std::string showInvalidCommand() {
	std::string str = red("Error: Invalid command\n") +
					  "Type \"subrescal --help\" to see how to use the program.\n";
	return str;
}
// }
