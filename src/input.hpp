#pragma once
#include "custom-type.hpp"

name_amount_pair keyboardInput();

/**
 * Convert string to integer if the string contain only integer.
 * @return : The number, If success convert.
 * @return : 0, If success convert but the input is "-1".
 * @return : -1, If error.
 */
int convertStringToNumber(const char* str);
