//
//  main.cpp
//  ex1_18
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    std::cout << "Enter two numbers to symbolize a range: " << std::endl;
    int val1 = 0;
    int val2 = 0;
    
    std::cin >> val1 >> val2;
    
    int lower = 0;
    int upper = 0;
    
    if (val1 <= val2)
    {
        lower = val1;
        upper = val2;
    }
    else
    {
        lower = val2;
        upper = val1;
    }
    
    
    for (int val = lower; val <= upper; ++val)
    {
        std::cout << val << std::endl;
    }
    
    
    return 0;
}
