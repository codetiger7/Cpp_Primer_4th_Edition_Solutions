//
//  main.cpp
//  ex3_10_1
//
//  Created by Brian Opedal on 7/16/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <cctype>
#include <iostream>
#include <string>


int main()
{
    
    std::cout << "Enter a line of text with punctuation characters:" << std::endl;
    
    std::string line;

    while (getline(std::cin,line))
    {
        typedef std::string::size_type strSz;
        for (strSz cnt = 0; cnt != line.size(); ++cnt)
        {
            if (std::ispunct(line[cnt]))
            {
                line.erase(cnt, 1);
                --cnt;
            }
        }
        
        std::cout << line << std::endl;
    }
}
