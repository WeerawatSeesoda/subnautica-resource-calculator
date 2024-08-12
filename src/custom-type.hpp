#pragma once
#include <array>
#include <string>
#include <vector>

struct inputdata
{
	std::string name;
	int number;
};

struct item
{
	char level;
	std::string name;
	int number;
};

typedef std::vector<item> vecofitems;

typedef std::vector<vecofitems> levels;

