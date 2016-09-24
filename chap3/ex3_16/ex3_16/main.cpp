//
//  main.cpp
//  ex3_16
//
//  Created by Brian Opedal on 7/19/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> ivec1(10, 42);  // preferred, simple, and clear
    vector<int> ivec2;
    typedef vector<int>::size_type vst;
    for (vst cnt = 0; cnt != 10; ++cnt)
    {
        ivec2.push_back(42);
    }
    
    vector<int> ivec3(ivec1); // also good;
}