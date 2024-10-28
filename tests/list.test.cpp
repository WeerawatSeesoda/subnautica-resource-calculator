#include "../src/list.hpp"
#include "../src/custom-type.hpp"
#include "../src/paint-text.hpp"
#include <gtest/gtest.h>
#include <string>
#include <vector>

namespace {

class List : public testing::Test {
  protected:
	List() {
		items_list_f = {
			{ "Battery", 1 },
			{ "Power cell", 3 },
			{ "Seamoth", 1 }
		};
	}
	std::vector<name_amount_pair> items_list_f;
};

TEST_F(List, Clear_list) {
	clearList(items_list_f);

	EXPECT_TRUE(items_list_f.empty());
}

TEST_F(List, Show_list_empty) { // Don't use fixture. Just want the same test name.
	std::string expect = yellow("\tNothing on the list.\n\n");

	std::vector<name_amount_pair> list_list;
	std::string result = showList(list_list);

	EXPECT_EQ(expect, result);
}

TEST_F(List, Show_list) {
	std::string expected = std::string("") +
						   "Items wait to calculate:\n" +
						   "\t1. Battery: 1\n" +
						   "\t2. Power cell: 3\n" +
						   "\t3. Seamoth: 1\n" +
						   "\n";

	std::string result = showList(items_list_f);

	EXPECT_EQ(expected, result);
}

TEST_F(List, Add_to_list) { // Don't use fixture. Just want the same test name.
	std::vector<name_amount_pair> expect = {
		{ "Battery", 1 },
		{ "Power cell", 3 },
		{ "Seamoth", 1 }
	};

	std::vector<name_amount_pair> result;
	addToList(result, "Battery", 1);
	addToList(result, "Power cell", 3);
	addToList(result, "Seamoth", 1);

	ASSERT_EQ(expect.size(), result.size());

	EXPECT_EQ(expect.at(0).name, result.at(0).name);
	EXPECT_EQ(expect.at(0).amount, result.at(0).amount);

	EXPECT_EQ(expect.at(1).name, result.at(1).name);
	EXPECT_EQ(expect.at(1).amount, result.at(1).amount);

	EXPECT_EQ(expect.at(2).name, result.at(2).name);
	EXPECT_EQ(expect.at(2).amount, result.at(2).amount);
}

} // namespace
