#include "list.hpp"
#include "custom-type.hpp"
#include "paint-text.hpp"
#include <format>
#include <iostream>
#include <string>
#include <vector>

std::string showList(std::vector<struct inputdata>& list) {
	if (list.empty()) {
		return yellow("\tNothing on the list.\n\n");
	}

	std::string output = "Items wait to calculate:\n";
	int order = 0;
	for (auto item = list.begin(); item != list.end(); item++) {
		output += std::format("\t{}. {}: {}\n", std::to_string(++order), item->name, std::to_string(item->number));
	}
	output += "\n";
	return output;
}

void addToList(std::vector<struct inputdata>& list, std::string name, int amount) {
	list.push_back({ name, amount });
}

void clearList(std::vector<struct inputdata>& list) {
	list.clear();
}

void clearList(std::vector<struct inputdata>& list, std::string mode) {
	list.clear();
	if (mode == "echo") {
		std::cout << "\tThe list was cleared.\n";
	}
}
