//
//  main.cpp
//  ex3_8
//
//  Created by Brian Opedal on 6/27/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter text: " << std::endl;
    std::string tempStr;
    std::string longStr;
    
    while(std::cin >> tempStr)
    {
        longStr += tempStr;
    }
    
    std::cout << longStr << std::endl;
    
    return 0;
}
