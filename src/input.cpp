#include "input.h"
#include <iostream>
#include <limits>
#include <string>
#include "custom-type.h"

void showMenu() {
	const char* str = R"V0G0N(
Please enter an item's name and its quantity, or type 
	"done" - to show all the materials you need, or
	"exit" - to close the program.
)V0G0N";
	std::cout << str << std::endl;
}

inputdata keyboardInput() {
	showMenu();

	inputdata input = { "", 0 };

	/* Name */
	bool is_look_good = false;
	while (!is_look_good) {
		std::string item_name;

		std::cout << "Enter item's name : ";
		std::getline(std::cin, item_name);

		if (item_name.empty()) {
			std::cout << "ERROR : Item's name can't be empty. Please try again." << std::endl;
		} else if (item_name == "exit") {
			input.name = "EXIT";
			return input;
		} else if (item_name == "done") {
			input.name = "DONE";
			return input;
		} else {
			input.name = item_name;
			is_look_good = true;
		}
	};

	/* Number */
	int item_number = 0;
	while (item_number < 1) {
		std::cout << "How many item: ";
		std::cin >> item_number;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)

		if (std::cin.fail()) {
			std::cout << "ERROR : Your input is not an integer." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)
		} else if (item_number < 1) {
			std::cout << "ERROR : The number must larger than 0. Please Try again." << std::endl;
		}
	};
	input.number = item_number;

	return input;
}
