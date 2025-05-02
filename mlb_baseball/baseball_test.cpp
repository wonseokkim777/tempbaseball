#include "gmock/gmock.h"
#include "baseball.cpp"

TEST(BaseballGame, TryGameTest) {
	EXPECT_EQ(1, 1);
	EXPECT_EQ(2, 2);
	EXPECT_EQ(3, 3);
	EXPECT_EQ(4, 4);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}

