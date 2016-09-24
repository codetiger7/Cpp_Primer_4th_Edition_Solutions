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

    for ( auto val : ivec)
        cout << val << " ";
    
    cout << endl;
    
    
    // calculate and print the sum of each pair of adjacent elements in the vector
    int pairSum = 0;
    typedef vector<int>::size_type vSz;
    for (vSz cnt = 0; cnt != ivec.size(); ++cnt)
    {
        if (cnt % 2 == 0 && cnt == ivec.size()-1 && cnt != 0)
        {
            cout << "There is an odd number: " << ivec[cnt] << endl;
            break;
        }
        if (cnt % 2 == 0)
        {
            pairSum = ivec[cnt];
        }
        else
        {
            pairSum += ivec[cnt];
            cout << pairSum << endl;
        }
    }
    

    
}