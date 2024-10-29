#pragma once
#include "custom-type.hpp"
#include <string>

void show(levels);
std::string formattingOutput(levels);
void showInstruction();
void showHelp();

// Implementation detail {
std::string printItemsInTheLevel(int, vecofitems);
std::string printLevelNumber(int);
// }
