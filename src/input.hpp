#pragma once
#include "custom-type.hpp"

inputdata keyboardInput();

/** Convert string to number if the string contain only an integer number.
* Return the number  -  If only contain an integer number.
* Return  0          -  If legit as above and is "-1".
* Return -1          -  Otherwise.
*/
int convertStringToNumber(const char *str);
