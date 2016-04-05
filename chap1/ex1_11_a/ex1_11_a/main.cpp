//
//  main.cpp
//  ex1_11_a
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int num = 10;
    
    while (num != -1)
    {
        std::cout << num << std::endl;
        --num;
    }
    
    return 0;
}
