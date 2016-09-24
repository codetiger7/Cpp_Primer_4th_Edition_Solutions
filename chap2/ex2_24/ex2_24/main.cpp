//
//  main.cpp
//  ex2_24
//
//  Created by Brian Opedal on 4/10/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    int ival = 1.01;
    
    int& rval1 = ival;
    
    int& rval2 = ival;
    
    const int& rval3 = 1;
    
    return 0;
}
