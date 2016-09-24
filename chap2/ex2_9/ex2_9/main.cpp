//
//  main.cpp
//  ex2_9
//
//  Created by Brian Opedal on 4/9/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    // (a)
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    
    // (b)
    std::cout << 3.14e1L << std::endl;
    
    
    // (c)
    // undefined std::cout << "two" L"somes" << std::endl;
    
    // (d)
    //std::cout << 1024f << std::endl;
    
    // (e)
    // floating points hanve no sign. std::cout << 3.14UL << std::endl;
    
    // (f)
    
    
    std::cout << "multiple line
    comment" << std::endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
