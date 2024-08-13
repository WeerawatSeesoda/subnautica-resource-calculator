#include <gtest/gtest.h>
#include "../src/show.hpp"

TEST(Show, Print_Level) {
	EXPECT_EQ(printLevel(1), "Level 1:");
}