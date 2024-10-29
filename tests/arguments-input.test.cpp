#include "../src/arguments-input.hpp"
#include "../src/custom-type.hpp"
#include "../src/paint-text.hpp"
#include "../src/show.hpp"
#include "../src/version.hpp"
#include <gtest/gtest.h>

namespace {

const int succeed_return = 0;
const int fail_return = 1;

TEST(Arguments_Input, Help) {
	std::string expect_msg = showHelp();

	name_amount_pair result;

	const char* argv1[] = { "the_program_name", "--help" };
	result = argumentsInput(2, argv1);
	ASSERT_EQ(succeed_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);

	const char* argv2[] = { "the_program_name", "-h" };
	result = argumentsInput(2, argv2);
	ASSERT_EQ(succeed_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);

	const char* argv3[] = { "the_program_name", "help" };
	result = argumentsInput(2, argv3);
	ASSERT_EQ(succeed_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);
}

TEST(Arguments_Input, Version) {
	std::string expect_msg = showVersion();

	name_amount_pair result;

	const char* argv1[] = { "the_program_name", "--version" };
	result = argumentsInput(2, argv1);
	ASSERT_EQ(succeed_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);

	const char* argv2[] = { "the_program_name", "-v" };
	result = argumentsInput(2, argv2);
	ASSERT_EQ(succeed_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);
}

TEST(Arguments_Input, Too_Many_Arguments) {
	std::string expect_msg = showInvalidCommand();

	const char* argv[] = { "the_program_name", "something", "something", "something" };
	name_amount_pair result = argumentsInput(4, argv);

	ASSERT_EQ(fail_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);
}

TEST(Arguments_Input, Item_Amount_Less_Than_1) {
	std::string expect_msg = red("Error: The item amount must larger than 0.\n");

	name_amount_pair result;

	const char* argv1[] = { "the_program_name", "something", "0" };
	result = argumentsInput(3, argv1);
	ASSERT_EQ(fail_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);

	const char* argv2[] = { "the_program_name", "something", "-1" };
	result = argumentsInput(3, argv2);
	ASSERT_EQ(fail_return, result.amount);
	EXPECT_EQ(expect_msg, result.name);
}

TEST(Arguments_Input, Item_Not_Found) {

	const char* argv[] = { "the_program_name", "Some unknow item", "1" };
	name_amount_pair result = argumentsInput(3, argv);

	ASSERT_EQ(fail_return, result.amount);
}

} // namespace