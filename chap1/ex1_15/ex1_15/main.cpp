//
//  main.cpp
//  ex1_15
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0;
    int v2 = 0;
    
    std::cin >> v1 >> v2;
    
    int lower;
    int upper;
    if (v1 <= v2)
    {
        lower = v1;
        upper = v2;
    }
    else
    {
        lower = v2;
        upper = v1;
    }
    
    int sum = 0;
    for (int val = lower; val <= upper; ++val)
    {
        sum += val;
    }
    
    std::cout << "Sum of " << lower
              << " to " << upper
              << " inclusive is "
              << sum << std::endl;
    return 0;
}
