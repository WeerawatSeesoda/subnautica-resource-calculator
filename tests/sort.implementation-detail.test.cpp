#include "../src/sort.hpp"
#include <gtest/gtest.h>


TEST(Sort, Remove_Duplication_in_the_Level) {
	vecofitems expected = {
		{'1', "Acid mushroom", 2},
		{'1', "Copper ore", 1}
	};

	vecofitems duplicated_items = {
		{'1', "Acid mushroom", 1},
		{'1', "Copper ore", 1},
		{'1', "Acid mushroom", 1}
	};

	vecofitems result = removeDuplicationInTheLevel(duplicated_items);

	ASSERT_EQ(expected.size(), result.size());
	for (long long unsigned int i = 0; i < expected.size(); i++) {
		EXPECT_EQ(expected[i].level, result[i].level);
		EXPECT_EQ(expected[i].name, result[i].name);
		EXPECT_EQ(expected[i].number, result[i].number);
	}
}
