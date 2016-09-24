//
//  main.cpp
//  ex3_17c
//
//  Created by Brian Opedal on 7/19/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> ivec(10, 2);
    
    typedef vector<int>::iterator it;
    
    for (it b = ivec.begin(); b != ivec.end(); ++b)
    {
        *b = *b * 2;
    }
    
    for (it c = ivec.begin(); c != ivec.end(); ++c)
    {
        cout << *c << " ";
    }
    
    cout << endl;
    
}