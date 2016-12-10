
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




