//
//  main.cpp
//  ex3_22
//
//  Created by Brian Opedal on 7/24/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10, 3);
    
    
    
//    vector<int>::iterator mid2 = ivec.begin() + ivec.size() / 2;
    
    vector<int>::iterator mid = (ivec.begin() + ivec.end()) ; // 2;
    
    
}