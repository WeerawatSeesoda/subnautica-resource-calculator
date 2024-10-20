#include <iostream>
#include "custom-type.hpp"
#include "input.hpp"
#include "calculation.hpp"
#include "sort.hpp"
#include "show.hpp"
#include "libs.hpp"
#include "paint-text.hpp"

int main() {
	try {
		vecofitems all_items;
		inputdata input = { "", 0 };
		levels lvs;

		while (input.name != "EXIT") {
			input = keyboardInput();

			if (input.name == "EXIT") {
				std::cout << "\nThank you and goodbye.\n";
			}
			else if (input.name == "DONE") {
				lvs = sorting(all_items);
				show(lvs);

				all_items.clear();
				lvs.clear();
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

/*
*	HOW TO ADD NEW ITEMS
*		1. ADD TO "recipe\leve-<N>-recipes.h".
*		2. ADD TO "calculate<N>th()" inside the "calculation.cpp".
*/
