


#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include <bitset>

#include "BitManipulations.cpp"

using namespace std;

TEST(CANARYTEST, canary)
{
    ASSERT_TRUE(true);
}

TEST(Bit_TestCase, and_bit_of_3_and_7_should_give_3)
{
    BitManipulations bitM;
    unsigned long expVal{3};
    ASSERT_EQ(expVal, bitM.a());
}

TEST(Bit_TestCase, b_double_and_of_3_and_7_shall_give_true)
{
    BitManipulations bitM;
    
    ASSERT_EQ(true, bitM.b());
}

TEST(Bit_TestCase, c_3_or_7_shall_give_7)
{
    BitManipulations b;
    unsigned long expV{7};
    ASSERT_EQ(expV, b.c());
}

TEST(Bit_TestCase, d_3_or_or_7_shall_give_true)
{
    BitManipulations b;
    ASSERT_EQ(true, b.d());
}


// bitset tests

class BitTest
: public testing::Test
{
public:
    bitset<30> quiz;
};

TEST_F(BitTest, bit_and_shall_return_3)
{
    quiz[27] = true;
    ASSERT_EQ(1, quiz[27]);
    
    quiz[27] = false;
    ASSERT_EQ(0, quiz[27]);
    
    
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
