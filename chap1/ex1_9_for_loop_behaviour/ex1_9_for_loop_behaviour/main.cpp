//
//  main.cpp
//  ex1_9_for_loop_behaviour
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
