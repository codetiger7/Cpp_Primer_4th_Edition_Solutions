//
//  main.cpp
//  ex3_7b
//
//  Created by Brian Opedal on 6/27/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    std::string sentence1;
    std::string sentence2;
    
    std::cout << "Enter two sentences: " << std::endl;
    
    getline(std::cin, sentence1);
    getline(std::cin, sentence2);
    
    
    if (sentence1.length() == sentence2.length())
    {
        std::cout << "The two strings are of the same length!" << std::endl;
    }
    else if (sentence1.length() > sentence2.length())
    {
        std::cout << "The longest sentence is: " << std::endl;
        std::cout << sentence1 << std::endl;
    }
    else
    {
        std::cout << "The longest sentence is: " << std::endl;
        std::cout << sentence2 << std::endl;
    }

    
    return 0;
}
