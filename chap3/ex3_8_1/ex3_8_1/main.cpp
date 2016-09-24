//
//  main.cpp
//  ex3_8_1
//
//  Created by Brian Opedal on 7/16/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    bool first = true;
    std::string text;
    std::string concat;
    while (std::cin >> text)
    {
        if (!first)
        {
            concat += " ";
        }
        
        concat +=  text;
        first = false;
    }
    
    std::cout << concat << std::endl;
}