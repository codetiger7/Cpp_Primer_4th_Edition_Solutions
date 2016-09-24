//
//  main.cpp
//  ex3_13
//
//  Created by Brian Opedal on 7/17/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    
    cout << "Enter integer values: " << endl;
    int value;
    
    // read set of integers into vector
    while (cin >> value)
    {
        ivec.push_back(value);
    }
    
    
    
    // calculate
    int lval    = 0;
    int rval    = 0;
    typedef vector<int>::size_type vSz;
    typedef vector<int>::const_iterator lIter;
    typedef vector<int>::const_reverse_iterator rIter;
    
    for (vSz cnt = 0; cnt != ivec.size(); ++cnt)
    {
        
    }
    
    
    
}