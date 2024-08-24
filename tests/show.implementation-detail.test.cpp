#include <gtest/gtest.h>
#include "../src/show.hpp"

TEST(Show, Print_1_Item) {
	std::string expected = std::string("") +
		"Level 2:\n" +
		"		- Battery : 1\n";

	vecofitems items = {
		{ '2', "Battery", 1 }
	};

	std::string result = printItemsInTheLevel(2, items);

	EXPECT_EQ(expected, result);
}

TEST(Show, Print_2_Item) {
	std::string expected = std::string("") +
		"Level 1:\n" +
		"		- Acid mushroom : 2\n" +
		"		- Copper ore : 1\n";

	vecofitems items = {
		{ '1', "Acid mushroom", 2 },
		{ '1', "Copper ore", 1 }
	};

	std::string result = printItemsInTheLevel(1, items);

	EXPECT_EQ(expected, result);
}


TEST(Show, Print_Level_Number) {
	EXPECT_EQ(printLevelNumber(1), "Level 1:\n");
}
