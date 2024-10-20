#include "paint-text.hpp"
#include <string>

std::string red(const char* str) {
	std::string buffer = "\x1B[31m";
	buffer += str;
	buffer += "\033[0m";
	return buffer;
}

std::string green(const char* str) {
	std::string buffer = "\x1B[32m";
	buffer += str;
	buffer += "\033[0m";

	return buffer;
}

std::string yellow(const char* str) {
	std::string buffer = "\x1B[33m";
	buffer += str;
	buffer += "\033[0m";

	return buffer;
}

std::string cyan(std::string& str) {
	std::string buffer = "\x1B[36m";
	buffer += str;
	buffer += "\033[0m";
	return buffer;
}
