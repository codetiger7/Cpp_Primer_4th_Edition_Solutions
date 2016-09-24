//
//  main.cpp
//  ex3_17a
//
//  Created by Brian Opedal on 7/19/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int num = 0;
    
    while (cin >> num)
    {
        ivec.push_back(num);
    }
    
    typedef vector<int>::const_iterator cit;
    bool restart = true;
    int sum = 0;
    
    for (cit iter = ivec.begin(); iter != ivec.end(); ++iter)
    {
        if (restart)
        {
            sum = *iter;
            restart = false;
        }
        else
        {
            sum += *iter;
            restart = true;
            cout << sum << endl;
        }
    }
    
    if (!restart)
    {
        cout << "number is odd: " << sum << endl;
    }
}