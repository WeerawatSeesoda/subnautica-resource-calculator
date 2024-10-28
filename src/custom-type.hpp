#pragma once
#include <string>
#include <vector>

struct name_amount_pair {
	std::string name;
	int amount;
};

struct item {
	char level;
	std::string name;
	int number;
};

typedef std::vector<item> vecofitems;

typedef std::vector<vecofitems> levels;
