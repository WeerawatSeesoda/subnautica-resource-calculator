#pragma once
#include "custom-type.hpp"
#include <string>
#include <vector>

void addToList(std::vector<name_amount_pair>& list, std::string name, int amount);
void clearList(std::vector<name_amount_pair>& list);
void clearList(std::vector<name_amount_pair>& list, std::string mode);
std::string showList(std::vector<name_amount_pair>& list);
