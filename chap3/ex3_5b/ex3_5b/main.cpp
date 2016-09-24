//
//  main.cpp
//  ex3_5b
//
//  Created by Brian Opedal on 5/8/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//


#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    
    cout << "Enter text one line at a time." << endl;;
    
    string word;
    while (cin >> word)
    {
        cout << word << endl;
    }
    
    
    return 0;
}
