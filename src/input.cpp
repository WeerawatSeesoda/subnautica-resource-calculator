#include <iostream>
#include <limits>
#include <string>
#include "custom-type.hpp"
#include "input.hpp"

void showMenu();
std::string getName();
int getAmount();

inputdata keyboardInput() {
	inputdata input = { "", 0 };
	
	showMenu();
	input.name = getName();
	if (input.name == "EXIT" || input.name == "DONE") {
		return input;
	}
	input.number = getAmount();

	return input;
}


void showMenu() {
	const char* str = R"V0G0N(
Please enter an item's name and its quantity, or type 
	"done" - to show all the materials you need, or
	"exit" - to close the program.
)V0G0N";
	std::cout << str << std::endl;
}

std::string getName() {
	bool is_look_good = false;
	std::string item_name;

	while (!is_look_good) {

		std::cout << "Enter item's name : ";
		std::getline(std::cin, item_name);

		if (item_name.empty()) {
			std::cout << "ERROR : Item's name can't be empty. Please try again." << std::endl;
		} else if (item_name == "exit") {
			return "EXIT";
		} else if (item_name == "done") {
			return "DONE";
		} else {
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
			std::cout << "ERROR : Your input is not an integer." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)
		} else if (item_number < 1) {
			std::cout << "ERROR : The number must larger than 0. Please Try again." << std::endl;
		}
	};

	return item_number;
}
