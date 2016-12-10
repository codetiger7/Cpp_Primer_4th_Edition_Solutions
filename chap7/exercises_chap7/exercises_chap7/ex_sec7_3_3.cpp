
#include <gtest/gtest.h>


namespace ex7_21
{
    int factorial(int value)
    {
        int factorial = 1;
        
        for(int i = value; i != 0; --i)
        {
            factorial *= i;
        }
        
        
        return factorial;
    }
}


TEST(Exercise7_21, iterative_factorial)
{
    using namespace ex7_21;
    
    EXPECT_EQ(1, factorial(0));
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(6, factorial(3));
    EXPECT_EQ(24, factorial(4));
    EXPECT_EQ(120, factorial(5));
}

