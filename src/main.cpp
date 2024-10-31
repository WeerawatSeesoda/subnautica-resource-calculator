#include "arguments-input.hpp"
#include "calculation.hpp"
#include "custom-type.hpp"
#include "input.hpp"
#include "libs.hpp"
#include "list.hpp"
#include "paint-text.hpp"
#include "show.hpp"
#include "sort.hpp"
#include <iostream>
#include <string>

int main(const int argc, const char* argv[]) {
	if (argc > 1) {
		name_amount_pair result = argumentsInput(argc, argv);
		std::cout << result.name;
		return result.amount;
	}

	try {
		vecofitems all_items;
		name_amount_pair input = { "", 0 };
		levels lvs;
		std::vector<name_amount_pair> list;

		std::cout << showInstruction();
		while (input.name != "EXIT") {
			input = keyboardInput();

			if (input.name == "EXIT") {
				std::cout << "\nThank you and goodbye.\n";
			}
			else if (input.name == "HELP") {
				std::cout << showInstruction();
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

/*
 *	HOW TO ADD NEW ITEMS
 *		1. ADD TO "recipe\leve-<N>-recipes.h".
 *		2. ADD TO "calculate<N>th()" inside the "calculation.cpp".
 */
