#include "libs.hpp"
#include "custom-type.hpp"
#include <algorithm> // std::transform

void insertvector(vecofitems& a, vecofitems b) {
	a.insert(a.end(), b.begin(), b.end());
}

std::string toLowerCase(std::string str);

/* Insensitive case string comparison */
bool compare_str(std::string str1, std::string str2) {
	std::string buff1 = toLowerCase(str1);
	std::string buff2 = toLowerCase(str2);
	if (buff1 == buff2) {
		return true;
	}
	return false;
}

std::string toLowerCase(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
	return str;
}
