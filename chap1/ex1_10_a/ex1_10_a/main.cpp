//
//  main.cpp
//  ex1_10_a
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int sum = 0;
    for (int i = 50; i != 101; ++i)
    {
        sum += i;
    }
    
    std::cout << "Sum is: " << sum << std::endl;
    
    return 0;
}
