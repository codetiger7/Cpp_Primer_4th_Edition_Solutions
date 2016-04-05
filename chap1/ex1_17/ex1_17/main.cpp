//
//  main.cpp
//  ex1_17
//
//  Created by Brian Opedal on 4/3/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    std::cout << "Enter a serie of numbers: " << std::endl;
    
    int num = 0;
    int count = 0;
    while(std::cin >> num)
    {
        if (num < 0)
            ++count;
    }
    
    std::cout << "There are "
              << count
              << " negative numbers in the serie of numbers entered" << std::endl;
    
    return 0;
}
