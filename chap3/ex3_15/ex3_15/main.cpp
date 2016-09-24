//
//  main.cpp
//  ex3_15
//
//  Created by Brian Opedal on 7/19/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec(1);
    // implement fix
    ivec[0] = 15; // not legal
    
    cout << ivec[0] << endl;
}