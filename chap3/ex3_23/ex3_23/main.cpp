//
//  main.cpp
//  ex3_23
//
//  Created by Brian Opedal on 7/27/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // explain the bit pattern each of the following bitset object contains:
    
    // a)
    bitset<64> bitvec(32);
    // 0000000000000000000000000000000000000000000000000000000000100000
    cout << "bitvec: " << bitvec << endl;
    
    
    // b)
    bitset<32> bv(1010101);
    //0000011110110100110110101
    cout << "bv: " << bv << endl;
    
    // c)
    string bstr;
    cin >> bstr;
    bitset<8> bv1(bstr);
    // enter 1100
    // cout << 00001100
    cout << "bv1: " << bv1 << endl;
    
    
}