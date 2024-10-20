#include <iostream>
#include "custom-type.hpp"
#include "input.hpp"
#include "calculation.hpp"
#include "sort.hpp"
#include "show.hpp"
#include "libs.hpp"
#include "paint-text.hpp"

void showInstruction();

int main() {
	try {
		vecofitems all_items;
		inputdata input = { "", 0 };
		levels lvs;

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
				}
			}
			else {
				vecofitems caled = calculating(input);

				if (caled[0].level == '0') {
					std::cout << caled[0].name << "\n";
				}
				else {
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

)V0G0N";
	std::cout << str;
}

/*
*	HOW TO ADD NEW ITEMS
*		1. ADD TO "recipe\leve-<N>-recipes.h".
*		2. ADD TO "calculate<N>th()" inside the "calculation.cpp".
*/
