//
//  main.cpp
//  ex3_14
//
//  Created by Brian Opedal on 7/19/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> svec;
    typedef string::size_type ssz;

    while (cin >> word)
    {
        svec.push_back(word);
    }
    
    for (auto& vWord : svec)
    {
        typedef string::size_type ssz;
        for (ssz cnt = 0; cnt != vWord.size(); ++cnt)
        {
            vWord[cnt] = toupper(vWord[cnt]);
        }
    }
    
    ssz divcnt = 0;
    for (const auto& sword : svec)
    {
        cout << sword << " ";
        ++divcnt;
        if (divcnt % 8 == 0)
        {
            cout << endl;
        }
    }
    
}