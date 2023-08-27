#pragma once
#include <algorithm> // std::transform
#include "custom-type.h"

void insertvector(vecofitems& a, vecofitems b) {
	a.insert(a.end(), b.begin(), b.end());
}

std::string toLowerCase(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
	return str;
}
