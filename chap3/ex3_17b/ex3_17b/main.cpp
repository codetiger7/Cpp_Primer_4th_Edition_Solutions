//
//  main.cpp
//  ex3_17b
//
//  Created by Brian Opedal on 7/19/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> svec;
    string word;
    typedef string::iterator iter;
    
    cout << "Enter: " << endl;
    
    while (cin >> word)
    {
        for(iter it = word.begin(); it != word.end(); ++it)
        {
            *it = toupper(*it);
            
        }
        svec.push_back(word);
    }
    
    
    long i = 0;
    
    typedef vector<string>::const_iterator sst;
    for (sst v = svec.begin(); v != svec.end(); ++v)
    {
        ++i;
        cout << *v << " ";
        if (i % 8 == 0)
            cout << endl;
        
    }
    
}