#pragma once
#include "custom-type.hpp"
#include <string>

void show(levels);
std::string formattingOutput(levels);
std::string showInstruction();
std::string showHelp();

// Implementation detail {
std::string printItemsInTheLevel(int, vecofitems);
std::string printLevelNumber(int);
// }
