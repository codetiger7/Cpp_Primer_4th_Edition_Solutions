//
//  main.cpp
//  ex1_20
//
//  Created by Brian Opedal on 4/4/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Please enter range to sum: " << std::endl;
    int val1 = 0;
    int val2 = 0;
    
    std::cin >> val1 >> val2;
    
    int sum = 0;
    for(int val = val1; val <= val2; ++val)
    {
        sum += val;
    }
    
    std::cout << "The total value of the range: " << val1 << " - " << val2 << " is:\n"
              << sum << std::endl;
    
    
    return 0;
}
