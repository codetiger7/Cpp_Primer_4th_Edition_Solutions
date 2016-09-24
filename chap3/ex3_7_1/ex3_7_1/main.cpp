//
//  main.cpp
//  ex3_7_1
//
//  Created by Brian Opedal on 7/16/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <string>
#include <iostream>


int main()
{
    std::string first;
    std::string second;
    
    std::cout << "Enter two strings: " << std::endl;
    
    while (std::cin >> first)
    {
        std::cin >> second;
        
        if (first == second)
        {
            std::cout << "The strings are equal" << std::endl;
        }
        else if (first > second)
        {
            std::cout << "The first string: " << first << std::endl;
            std::cout << "is larger" << std::endl;
            std::cout << "Than the second string: " << second << std::endl;
        }
        else
        {
            std::cout << "The second string: " << second << std::endl;
            std::cout << "is larger" << std::endl;
            std::cout << "Than the first string: " << first << std::endl;
        }
        
        
        std::cout << "\n";
        
        if (first.length() == second.length())
        {
            std::cout << "The strings have the same length" << std::endl;
        }
        else if (first.length() > second.length())
        {
            std::cout << "The first string is longest" << std::endl;
        }
        else
        {
            std::cout << "The second string is the longest" << std::endl;
        }
        
        
    }
}