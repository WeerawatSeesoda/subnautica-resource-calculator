#include <iostream>
#include "custom-type.hpp"
#include "input.hpp"
#include "calculation.hpp"
#include "sort.hpp"
#include "show.hpp"
#include "libs.hpp"

int main() {
	try {
		vecofitems all_items;
		inputdata input = { "", 0 };
		levels lvs;

		while (input.name != "EXIT") {
			input = keyboardInput();

			if (input.name == "DONE") {
				for (int i = 0; i < 40; i++) {
					std::cout << "=";
				}
				std::cout << "\n";

				lvs = sorting(all_items);
				show(lvs);

				all_items.clear();
				lvs.clear();

				for (int i = 0; i < 40; i++) {
					std::cout << "=";
				}
				std::cout << "\n";
			} else {
				vecofitems caled = calculating(input);
				if (caled[0].level == '0') {
					std::cout << caled[0].name << std::endl;
				} else {
					insertvector(all_items, calculating(input));
					std::cout << "Added \"" << caled[0].name << "\" to the list." << std::endl;
				}
			}
		};
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	} catch (const std::string e) {
		std::cerr << e << std::endl;
	}
	std::cout << "\nThank you and goodbye.\n" << std::endl;
	return 0;
}

/*
*	HOW TO ADD NEW ITEMS
*		1. ADD TO "recipe\leve-N-recipes.h".
*		2. ADD TO "calculating()".
*/
