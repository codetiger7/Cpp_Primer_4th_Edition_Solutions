//
//  main.cpp
//  ex1_22
//
//  Created by Brian Opedal on 4/4/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

#include "Sales_item.h"

int main(int argc, const char * argv[]) {
    
    
    std::cout << "Enter the two sales items to be added: " << std::endl;
    std::cout << "Isbn, number of items, price" << std::endl;
    
    Sales_item item1;
    Sales_item item2;
    std::cin >> item1 >> item2;
    
    std::cout << "The sum of the two items is: " << item1 + item2 << std::endl;
    
    
    return 0;
}
