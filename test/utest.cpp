#include <gtest/gtest.h>
#include "../src/libs.h"

TEST(StringComparison, true) {
	EXPECT_TRUE(compare_str("LOL", "lol"));
}
TEST(StringComparison, false) {
	EXPECT_FALSE(compare_str("lol1", "lol2"));
}
