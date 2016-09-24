//
//  main.cpp
//  ex3_7
//
//  Created by Brian Opedal on 5/28/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    cout << "Enter two sentences for comparison: " << endl;
    string sentence1;
    string sentence2;
    
    getline(cin, sentence1);
    getline(cin, sentence2);
    
    if (!sentence1.compare(sentence2))
    {
        std::cout << "sentences are equal" << std::endl;
    }
    else if( 0 < sentence1.compare(sentence2))
    {
        std::cout << sentence1 << std::endl;
        std::cout << "Is the largest sentence!" << std::endl;
    }
    else
    {
        std::cout << sentence2 << std::endl;
        std::cout << "Is the largest sentence!" << std::endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
