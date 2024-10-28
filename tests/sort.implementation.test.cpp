#include "../src/sort.hpp"
#include <gtest/gtest.h>

TEST(Sort, Sort_by_Level) {
	all_levels expected;
	expected.level1 = {
		{ '1', "A", 1 },
		{ '1', "B", 1 }
	};
	expected.level2 = {
		{ '2', "C", 1 },
		{ '2', "D", 1 },
	};
	expected.level3 = {
		{ '3', "E", 1 },
		{ '3', "F", 1 },
	};

	vecofitems all_items = {
		{ '1', "A", 1 },
		{ '1', "B", 1 },
		{ '2', "C", 1 },
		{ '2', "D", 1 },
		{ '3', "E", 1 },
		{ '3', "F", 1 },
	};
	all_levels result = sortByLevel(all_items);

	ASSERT_EQ(expected.level1.size(), result.level1.size());
	ASSERT_EQ(expected.level2.size(), result.level2.size());
	ASSERT_EQ(expected.level3.size(), result.level3.size());
	ASSERT_TRUE(result.level4.empty());
	ASSERT_TRUE(result.level5.empty());
	// Level 1
	for (int i = 0; i < (int)expected.level1.size(); i++) {
		EXPECT_EQ(expected.level1[i].level, result.level1[i].level);
		EXPECT_EQ(expected.level1[i].name, result.level1[i].name);
		EXPECT_EQ(expected.level1[i].number, result.level1[i].number);
	}
	// Level 2
	for (int i = 0; i < (int)expected.level2.size(); i++) {
		EXPECT_EQ(expected.level2[i].level, result.level2[i].level);
		EXPECT_EQ(expected.level2[i].name, result.level2[i].name);
		EXPECT_EQ(expected.level2[i].number, result.level2[i].number);
	}
	// Level 3
	for (int i = 0; i < (int)expected.level3.size(); i++) {
		EXPECT_EQ(expected.level3[i].level, result.level3[i].level);
		EXPECT_EQ(expected.level3[i].name, result.level3[i].name);
		EXPECT_EQ(expected.level3[i].number, result.level3[i].number);
	}
}

TEST(Sort, Sort_by_Name) {
	vecofitems expected = {
		{ '3', "D", 1 },
		{ '3', "E", 1 },
		{ '3', "F", 1 }
	};

	vecofitems result = {
		{ '3', "F", 1 },
		{ '3', "E", 1 },
		{ '3', "D", 1 }
	};
	sortByName(result);

	for (int i = 0; i < (int)expected.size(); i++) {
		EXPECT_EQ(expected[i].name, result[i].name);
	}
}

TEST(Sort, Remove_Duplication) {
	vecofitems expected = {
		{ '1', "Acid mushroom", 2 },
		{ '1', "Copper ore", 1 }
	};

	vecofitems result = {
		{ '1', "Acid mushroom", 1 },
		{ '1', "Copper ore", 1 },
		{ '1', "Acid mushroom", 1 }
	};
	removeDuplication(result);

	ASSERT_EQ(expected.size(), result.size());
	for (int i = 0; i < (int)expected.size(); i++) {
		EXPECT_EQ(expected[i].level, result[i].level);
		EXPECT_EQ(expected[i].name, result[i].name);
		EXPECT_EQ(expected[i].number, result[i].number);
	}
}
