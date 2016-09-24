//
//  main.cpp
//  ex3_9
//
//  Created by Brian Opedal on 6/27/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    // it instantiates a string
    // then it tries to print the first position character of that string
    
    // it is not valid
    // because there is no first position character, the string is empty
    
    string s;
    cout << s[0] << endl;
    
    return 0;
}
