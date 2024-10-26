#pragma once
#include "custom-type.hpp"
#include <string>
#include <vector>

void addToList(std::vector<struct inputdata>& list, std::string name, int amount);
void clearList(std::vector<struct inputdata>& list);
void clearList(std::vector<struct inputdata>& list, std::string mode);
std::string showList(std::vector<struct inputdata>& list);
