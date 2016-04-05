//
//  main.cpp
//  ex1_21
//
//  Created by Brian Opedal on 4/4/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"


int main(int argc, const char * argv[]) {
    
    std::cout << "Enter book transactions: " << std::endl;
    
    Sales_item item;
    
    while(std::cin >> item)
    {
        std::cout << item << std::endl;
    }
    
    return 0;
}
