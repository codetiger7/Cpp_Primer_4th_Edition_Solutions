
#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

#include "ex_sec7_2.h"
//#include "ex_sec7_3_3.h"
#include "ex_sec7_4.h"


TEST(Exercise7_23, check_declarations)
{
    using namespace ex_sec7_4;
    
    // a) illegal, becaues functions must take ony one argument
    //  calc(23.4, 55.1)
    
    // b) legal
    count("abcda", 'a');
    
    // c) legal
    calc(66);
    
    // d) legal, but double will be implicitly converted to an int, truncated
    sum(vec.begin(), vec.end(), 3.8);
    
    
    
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


TEST(Exercise7_14, sum_elements_of_vector_of_doubles)
{
    using namespace ex_sec7_2_5;

    std::vector<double> const dVec {5, 5, 5, 5, 10, 20};
    
    ASSERT_EQ(50, vectorSumIs(dVec.begin(), dVec.end()));
}

TEST(Exercise7_13, calculate_sum_of_array_with_three_approaches_to_array_bounds)
{
    using namespace ex_sec7_2_5;
    
    int const arr[] {5, 5, 5, 5, 10, 20};
    
    
    ASSERT_EQ(50, arraySumIs(arr, arr + 6));
    ASSERT_EQ(50, arraySumIs(arr, sizeof(arr)/sizeof(*arr)));
    ASSERT_EQ(50, arraySumIs(arr));

    
}



TEST(Exercise7_10, shall_return_true_on_empty_string_false_on_other)
{
    using namespace ex_sec7_2;
    
    std::string empty;
    EXPECT_TRUE(test(empty));
    
    std::string nonEmpty("meow");
    EXPECT_FALSE(test(nonEmpty));
}

TEST(Exercise7_10, shall_be_able_to_take_in_const_string_refs)
{
    using namespace ex_sec7_2;
    
    std::string const empty;
    EXPECT_TRUE(test(empty));
    
    std::string const nonEmpty("meow");
    EXPECT_FALSE(test(nonEmpty));
}





