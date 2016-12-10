
#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

uint absolute(int value);
int larger(int val1, int const* val2);


void swapValues(int* low, int* high);



TEST(Exercise7_5, return_largest_value)
{
    int val1 = 3;
    int val11 = 45;
    int const m = 7;
    int const * val2 = &m;

    EXPECT_EQ(7, larger(val1, val2));
    EXPECT_EQ(45, larger(val11, val2));
}

TEST(Exercise7_6, swap_values)
{
    int first = 777;
    int last  = 123;
    
    swapValues(&first, &last);
    
    ASSERT_EQ(777, last);
    ASSERT_EQ(123, first);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}





int larger(int val1, int const* val2)
{
    if (val1 > *val2)
    {
        return val1;
    }
    else
    {
        return *val2;
    }
}



uint absolute(int value)
{
    if (value < 0)
    {
        return value * (-1);
    }
    
    return value;
}



void swapValues(int* low, int* high)
{
    int temp = *high;
    *high = *low;
    *low = temp;
}

