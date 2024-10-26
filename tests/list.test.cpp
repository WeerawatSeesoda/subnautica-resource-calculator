#include "../src/list.hpp"
#include "../src/custom-type.hpp"
#include "../src/paint-text.hpp"
#include <gtest/gtest.h>
#include <string>
#include <vector>

TEST(List, Clear_list) {
	std::vector<struct inputdata> list = {
		{ "Battery", 1 },
		{ "Power cell", 3 },
		{ "Seamoth", 1 }
	};
	clearList(list);
	EXPECT_TRUE(list.empty());
}

TEST(List, Show_list_empty) {
	std::string expect = yellow("\tNothing on the list.\n\n");

	std::vector<struct inputdata> list;
	std::string result = showList(list);

	EXPECT_EQ(expect, result);
}

TEST(List, Show_list) {
	std::string expected = std::string("") +
						   "Items wait to calculate:\n" +
						   "\t1. Battery: 1\n" +
						   "\t2. Power cell: 3\n" +
						   "\t3. Seamoth: 1\n" +
						   "\n";

	std::vector<struct inputdata> itemsList = {
		{ "Battery", 1 },
		{ "Power cell", 3 },
		{ "Seamoth", 1 }
	};

	std::string result = showList(itemsList);
	EXPECT_EQ(expected, result);
}

TEST(List, Add_to_list) {
	std::vector<struct inputdata> expect = {
		{ "Battery", 1 },
		{ "Power cell", 3 },
		{ "Seamoth", 1 }
	};

	std::vector<struct inputdata> result;
	addToList(result, "Battery", 1);
	addToList(result, "Power cell", 3);
	addToList(result, "Seamoth", 1);

	EXPECT_EQ(expect.size(), result.size());

	EXPECT_EQ(expect.at(0).name, result.at(0).name);
	EXPECT_EQ(expect.at(0).number, result.at(0).number);

	EXPECT_EQ(expect.at(1).name, result.at(1).name);
	EXPECT_EQ(expect.at(1).number, result.at(1).number);

	EXPECT_EQ(expect.at(2).name, result.at(2).name);
	EXPECT_EQ(expect.at(2).number, result.at(2).number);
}
