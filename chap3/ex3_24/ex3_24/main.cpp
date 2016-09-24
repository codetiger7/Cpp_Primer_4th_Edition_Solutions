//
//  main.cpp
//  ex3_24
//
//  Created by Brian Opedal on 7/27/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string val("1000000010000100101110");
    bitset<32> bitset(val);
    
    cout << "bitset: " << bitset << endl;
    
    cout << "index 1: " << bitset[1] << endl;
    cout << "index 0: " << bitset[0] << endl;
}