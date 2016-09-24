//
//  main.cpp
//  ex2_25
//
//  Created by Brian Opedal on 4/13/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    // a)
    int ival = 1.01;
    //(b)
    //int &rval1 = 1.01;
    //(c)
    int &rval2 = ival;
    //(d)
    const int &rval3 = 1;
    
        
    //(a)
    rval2 = 3.14159;
    //(b)
    rval2 = rval3;
    //(c)
    ival = rval3;
    //(d)
    //rval3 = ival;
    return 0;
}
