#include "add.cpp"

#include "gtest/gtest.h"

using namespace std;

TEST(MyLibraryTest, Function1Test)
{
    EXPECT_EQ(3, add(1, 2));
}