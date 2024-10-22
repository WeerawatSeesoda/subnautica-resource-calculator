#include "../src/input.hpp"
#include <gtest/gtest.h>

TEST(Input_Validation, Zero) {
	int expected = 0;
	int result = convertStringToNumber("0");

	EXPECT_EQ(expected, result);
}

TEST(Input_Validation, One) {
	int expected = 1;
	int result = convertStringToNumber("1");

	EXPECT_EQ(expected, result);
}

TEST(Input_Validation, Two) {
	int expected = 2;
	int result = convertStringToNumber("2");

	EXPECT_EQ(expected, result);
}

TEST(Input_Validation, Two_Digit) {
	int expected = 69;
	int result = convertStringToNumber("69");

	EXPECT_EQ(expected, result);
}

TEST(Input_Validation, Negative_Number) {
	int expected = -69;
	int result = convertStringToNumber("-69");

	EXPECT_EQ(expected, result);
}

TEST(Input_Validation, Not_Number) {
	int expected = -1;
	int result = convertStringToNumber("a");

	EXPECT_EQ(expected, result);
}

TEST(Input_Validation, Mix_Number_and_Alphabets) {
	int expected = -1;

	int alphabet_then_number = convertStringToNumber("a69");
	EXPECT_EQ(expected, alphabet_then_number);

	int number_then_alphabet = convertStringToNumber("69a");
	EXPECT_EQ(expected, number_then_alphabet);

	int number_between_alphabets = convertStringToNumber("a420b");
	EXPECT_EQ(expected, number_between_alphabets);

	int alphabet_between_numbers = convertStringToNumber("64a420");
	EXPECT_EQ(expected, alphabet_between_numbers);
}
