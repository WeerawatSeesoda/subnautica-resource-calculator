#include <gtest/gtest.h>
#include "../src/sort.hpp"

TEST(Sort, Sorting) {
	levels expected = {
		{
			{ '1', "A", 2 },
			{ '1', "B", 1 },
			{ '1', "C", 10 }
		},
		{
			{ '2', "D", 1 },
			{ '2', "E", 1 },
			{ '2', "F", 3 }
		},
		{
			{ '3', "G", 1 },
			{ '3', "H", 1 }
		},
		{
			{ '4', "I", 1 }
		},
		{
			{ '5', "J", 1 }
		}
	};

	vecofitems scramble_items = {
		{ '1', "A", 1 },
		{ '1', "A", 1 },
		{ '1', "B", 1 },
		{ '2', "D", 1 },
		{ '5', "J", 1 },
		{ '3', "H", 1 },
		{ '2', "F", 1 },
		{ '1', "C", 1 },
		{ '2', "F", 1 },
		{ '3', "G", 1 },
		{ '2', "F", 1 },
		{ '4', "I", 1 },
		{ '2', "E", 1 },
		{ '1', "C", 9 }
	};
	levels result = sorting(scramble_items);

	ASSERT_EQ(expected.at(0).size(), result.at(0).size());
	ASSERT_EQ(expected.at(1).size(), result.at(1).size());
	ASSERT_EQ(expected.at(1).size(), result.at(1).size());
	ASSERT_EQ(expected.at(2).size(), result.at(2).size());
	ASSERT_EQ(expected.at(4).size(), result.at(4).size());
	// Level 1
	for (long long unsigned int i = 0; i < expected.at(0).size(); i++) {
		EXPECT_EQ(expected.at(0)[i].level, result.at(0)[i].level);
		EXPECT_EQ(expected.at(0)[i].name, result.at(0)[i].name);
		EXPECT_EQ(expected.at(0)[i].number, result.at(0)[i].number);
	}
	// Level 2
	for (long long unsigned int i = 0; i < expected.at(1).size(); i++) {
		EXPECT_EQ(expected.at(1)[i].level, result.at(1)[i].level);
		EXPECT_EQ(expected.at(1)[i].name, result.at(1)[i].name);
		EXPECT_EQ(expected.at(1)[i].number, result.at(1)[i].number);
	}
	// Level 3
	for (long long unsigned int i = 0; i < expected.at(2).size(); i++) {
		EXPECT_EQ(expected.at(2)[i].level, result.at(2)[i].level);
		EXPECT_EQ(expected.at(2)[i].name, result.at(2)[i].name);
		EXPECT_EQ(expected.at(2)[i].number, result.at(2)[i].number);
	}
	// Level 4
	for (long long unsigned int i = 0; i < expected.at(3).size(); i++) {
		EXPECT_EQ(expected.at(3)[i].level, result.at(3)[i].level);
		EXPECT_EQ(expected.at(3)[i].name, result.at(3)[i].name);
		EXPECT_EQ(expected.at(3)[i].number, result.at(3)[i].number);
	}
	// Level 5
	for (long long unsigned int i = 0; i < expected.at(4).size(); i++) {
		EXPECT_EQ(expected.at(4)[i].level, result.at(4)[i].level);
		EXPECT_EQ(expected.at(4)[i].name, result.at(4)[i].name);
		EXPECT_EQ(expected.at(4)[i].number, result.at(4)[i].number);
	}
}
