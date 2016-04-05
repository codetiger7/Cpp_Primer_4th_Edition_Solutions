//
//  main.cpp
//  ex1_16
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int val1 = 0;
    int val2 = 0;
    
    std::cout << "Enter two values: " << std::endl;
    std::cin >> val1 >> val2;
    
    std::cout << "The larger of the two outputs are: ";
    
    if (val1 <= val2)
    {
        std::cout << val2 << std::endl;
    }
    else
    {
        std::cout << val1 << std::endl;
    }
    return 0;
}
