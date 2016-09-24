//
//  main.cpp
//  ex1_23
//
//  Created by Brian Opedal on 4/4/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(int argc, const char * argv[]) {
    
    Sales_item temp;
    Sales_item sum;
    
    std::cout << "Enter and keep entering sales items unti done\n"
    << "Then enter ctrl-d" << std::endl;
    
    std::cin >> sum;
    
    while(std::cin >> temp)
    {
        sum += temp;
    }
    
    
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
