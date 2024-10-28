#include "calculation.hpp"
#include "custom-type.hpp"
#include "input.hpp"
#include "libs.hpp"
#include "list.hpp"
#include "paint-text.hpp"
#include "show.hpp"
#include "sort.hpp"
#include "version.hpp"
#include <cstring>
#include <iostream>
#include <string>

void showInstruction();
void showHelp();
void showInvalidCommand();

int main(int argc, char* argv[]) {
	// Arguments input.
	if (argc > 1) {
		std::string name = argv[1];
		if (argc == 2) {
			if ((name == "--version") ||
				(name == "-v")) {
				showVersion();
				return 0;
			}

			if ((name == "--help") ||
				(name == "-h") ||
				(name == "help")) {
				showHelp();
				return 0;
			}

			showInvalidCommand();
			return 1;
		}
		if (argc == 3) {
			int amount = convertStringToNumber(argv[2]);

			if (amount == -1) {
				showInvalidCommand();
				return 1;
			}

			if (amount < 1) {
				std::cout << red("Error: The amount number must larger than 0.\n");
				return 1;
			}

			vecofitems all_items;
			levels all_levels;
			name_amount_pair input = { name, amount };

			vecofitems calculated = calculating(input);

			// Item not found.
			if (calculated[0].level == '0') {
				std::cout << calculated[0].name << "\n";
				return 1;
			}

			insertvector(all_items, calculating(input));
			std::cout << "Calculating...\n";
			all_levels = sorting(all_items);
			show(all_levels);
			return 0;
		}
		if (argc > 3) {
			showInvalidCommand();
			return 1;
		}
	}

	// Manual input.
	try {
		vecofitems all_items;
		name_amount_pair input = { "", 0 };
		levels lvs;
		std::vector<name_amount_pair> list;

		showInstruction();
		while (input.name != "EXIT") {
			input = keyboardInput();

			if (input.name == "EXIT") {
				std::cout << "\nThank you and goodbye.\n";
			}
			else if (input.name == "HELP") {
				showInstruction();
			}
			else if (input.name == "DONE") {
				if (all_items.empty()) {
					std::cout << yellow("\tThere is nothing to calculate.\n\n");
				}
				else {
					std::cout << "Calculating...\n";
					lvs = sorting(all_items);
					show(lvs);

					all_items.clear();
					lvs.clear();
					clearList(list);
				}
			}
			else if (input.name == "CLEAR LIST") {
				all_items.clear();
				lvs.clear();
				clearList(list, "echo");
			}
			else if (input.name == "SHOW LIST") {
				std::cout << showList(list);
			}
			else {
				vecofitems caled = calculating(input);

				if (caled[0].level == '0') {
					std::cout << caled[0].name << "\n";
				}
				else {
					addToList(list, input.name, input.amount);
					insertvector(all_items, calculating(input));
					std::cout << green("\tAdded \"") << cyan(caled[0].name) << green("\" to the list.\n");
				}
			}
		};
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	catch (const std::string e) {
		std::cerr << e << "\n";
	}
	return 0;
}

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

void showInvalidCommand() {
	std::cout << red("Error: Invalid command\n");
	std::cout << "Type \"subrescal --help\" to see how to use the program.\n";
}

/*
 *	HOW TO ADD NEW ITEMS
 *		1. ADD TO "recipe\leve-<N>-recipes.h".
 *		2. ADD TO "calculate<N>th()" inside the "calculation.cpp".
 */
