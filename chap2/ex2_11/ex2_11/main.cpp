//
//  main.cpp
//  ex2_11
//
//  Created by Brian Opedal on 4/9/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    
    std::cout << "Enter the base and exponent:" << std::endl;
    
    int base = 0;
    int exponent = 0;
    
    std::cin >> base >> exponent;
    
    if ( base == 0 && exponent == 0)
    {
        std::cout << "The result of 0^0 is undefined " << std::endl;
    }
    else
    {
        int result = 1;
        for (int count = 0; count != exponent; ++count)
        {
            result *= base;
        }
        
        std::cout << "The result of " << base << "^" << exponent <<" is : " << result << std::endl;
    }
    
    return 0;
}
