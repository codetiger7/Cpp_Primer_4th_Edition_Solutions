//
//  main.cpp
//  ex3_10
//
//  Created by Brian Opedal on 6/27/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>

std::string&
removePunct(std::string& txt)
{
    typedef std::string::size_type sz;
    removePunct(txt);

//    
//    for (sz cnt = 0; cnt != txt.size(); ++cnt)
//    {
//        if (std::ispunct(txt[cnt]))
//        {
//        }
//    }
    return txt;
}



int main()
{
    std::string meow("how-me, are; you: dance. today!");
    
    meow = removePunct(meow);
    
    std::cout << meow << std::endl;
    
    
    return 0;
}
