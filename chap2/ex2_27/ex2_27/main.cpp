//
//  main.cpp
//  ex2_27
//
//  Created by Brian Opedal on 4/13/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    
    
    return 0;
}
