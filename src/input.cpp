#include <iostream>
#include <limits>
#include <string>
#include "custom-type.hpp"
#include "input.hpp"
#include "paint-text.hpp"

std::string getName();
int getAmount();

inputdata keyboardInput() {
	inputdata input = { "", 0 };

	input.name = getName();
	if (input.name == "EXIT" || input.name == "DONE" || input.name == "HELP") {
		return input;
	}
	input.number = getAmount();

	return input;
}

std::string getName() {
	bool is_look_good = false;
	std::string item_name;

	while (!is_look_good) {

		std::cout << "Enter item's name : ";
		std::getline(std::cin, item_name);

		if (item_name.empty()) {
			std::cout << red("\tERROR : Item's name can't be empty. Please try again.\n\n");
		}
		else if (item_name == "exit") {
			return "EXIT";
		}
		else if (item_name == "done") {
			return "DONE";
		}
		else if (item_name == "help") {
			return "HELP";
		}
		else {
			is_look_good = true;
		}
	};

	return item_name;
}

int getAmount() {
	int item_number = 0;

	while (item_number < 1) {
		std::cout << "How many item: ";
		std::cin >> item_number;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)

		if (std::cin.fail()) {
			std::cout << red("\tERROR : Your input is not an integer.\n\n");
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)
		}
		else if (item_number < 1) {
			std::cout << red("\tERROR : The number must larger than 0. Please Try again.\n\n");
		}
	};

	return item_number;
}

int convertStringToNumber(const char *str) {
	errno = 0;
	char *endptr;

	long number = strtol(str, &endptr, 10);
	if (errno == ERANGE) {
		return -1;
	}

	// The "strtol" will return 0 if both __found the "0"__ and __not found any legit number as the first character (after whitespaces, if exist)__.
	// This will return -1 in later case but leave it alone in the former case.
	if (*endptr != '\0') {
		return -1;
	}

	if (number == -1) {
		return 0;
	}

	return (int)number;
}
