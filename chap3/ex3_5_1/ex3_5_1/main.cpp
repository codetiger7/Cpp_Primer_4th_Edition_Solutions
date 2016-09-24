//
//  main.cpp
//  ex3_5_1
//
//  Created by Brian Opedal on 7/16/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    std::string text;
    
    while (getline(std::cin, text))
    {
        std::cout << text << std::endl;
    }
}
