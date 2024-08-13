#include <iostream>
#include "custom-type.hpp"
#include "show.hpp"

void show(levels lvs) {
	int level_number = 0;
	for (auto level = lvs.begin(); level != lvs.end(); level++) {
		level_number++;
		if (!level->empty()) {
			std::cout << "level " << level_number << std::endl;
			for (auto i = level->begin(); i != level->end(); i++) {
				std::cout << "\t- " << i->name << " : " << i->number << std::endl;
			}
		}
	}
}

std::string printLevel(int lvl_number) {
	return "Level 1:";
}