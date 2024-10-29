#pragma once
#include "../src/custom-type.hpp"
#include "string"

name_amount_pair argumentsInput(const int argc, const char* argv[]);

// Implementation detail {
std::string showInvalidCommand();
// }
