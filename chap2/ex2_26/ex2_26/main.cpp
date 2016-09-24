//
//  main.cpp
//  ex2_26
//
//  Created by Brian Opedal on 4/13/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // a)
    int ival = 0;
    const int& ri = 0;
    
    // b)
    ival = ri;
    //ri = ival;

    return 0;
}
