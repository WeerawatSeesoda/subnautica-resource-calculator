#include <gtest/gtest.h>
#include "../src/show.hpp"


TEST(Show, Formating_Ouput_2_Level) {
	std::string expected = std::string("") +
"========================================\n\
Level 1:\n\
		- Acid mushroom : 2\n\
		- Copper ore : 1\n\
Level 2:\n\
		- Battery : 1\n\
========================================\n";

	vecofitems level1 = {
		{ '1', "Acid mushroom", 2 },
		{ '1', "Copper ore", 1 }
	};
	vecofitems level2 = {
		{ '2', "Battery", 1 }
	};
	vecofitems level3;
	vecofitems level4;
	vecofitems level5;
	levels lvs = { level1, level2, level3, level4, level5 };
	std::string result = formattingOutput(lvs);

	EXPECT_EQ(expected, result);
}

TEST(Show, Formating_Ouput_4_Level) {
	std::string expected = std::string("") +
"========================================\n\
Level 1:\n\
		- Acid mushroom : 4\n\
		- Copper ore : 2\n\
		- Creepvine seed cluster : 2\n\
		- Lead : 1\n\
		- Quartz : 4\n\
		- Titanium : 10\n\
Level 2:\n\
		- Battery : 2\n\
		- Glass : 2\n\
		- Lubricant : 1\n\
		- Silicone rubber : 1\n\
		- Titanium ingot : 1\n\
Level 3:\n\
		- Power cell : 1\n\
Level 4:\n\
		- Seamoth : 1\n\
========================================\n";

	vecofitems level1 = {
		{ '1', "Acid mushroom", 4},
		{ '1', "Copper ore", 2},
		{ '1', "Creepvine seed cluster", 2},
		{ '1', "Lead", 1},
		{ '1', "Quartz", 4},
		{ '1', "Titanium", 10}
	};
	vecofitems level2 = {
		{ '2', "Battery", 2},
		{ '2', "Glass", 2},
		{ '2', "Lubricant", 1},
		{ '2', "Silicone rubber", 1},
		{ '2', "Titanium ingot", 1}
	};
	vecofitems level3 = {
		{ '3', "Power cell", 1}
	};
	vecofitems level4 = {
		{ '4', "Seamoth", 1}
	};
	vecofitems level5;
	levels lvs = { level1, level2, level3, level4, level5 };
	std::string result = formattingOutput(lvs);

	EXPECT_EQ(expected, result);
}
//----------------------------------------------------------------------------


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
//----------------------------------------------------------------------------


TEST(Show, Print_Level_Number) {
	EXPECT_EQ(printLevelNumber(1), "Level 1:\n");
}
//----------------------------------------------------------------------------
