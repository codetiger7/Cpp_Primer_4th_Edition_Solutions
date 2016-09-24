//
//  main.cpp
//  ex2_21
//
//  Created by Brian Opedal on 4/10/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    int sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
    }
    
    std::cout << "Sum from 0 to " << i << " is " << sum << std::endl;
    

    return 0;
}
