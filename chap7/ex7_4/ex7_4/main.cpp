
#include <iostream>
#include <string>
#include <gtest/gtest.h>

uint absolute(int value);

TEST(Absolute_Function, simple_test)
{
    EXPECT_EQ(4, absolute(-4));
    EXPECT_EQ(50, absolute(50));
    EXPECT_EQ(0, absolute(0));
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


uint absolute(int value)
{
    if (value < 0)
    {
        return value * (-1);
    }
    
    return value;
}
