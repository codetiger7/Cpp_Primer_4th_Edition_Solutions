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
    typedef vector<int>::const_reverse_iterator crit;

    
    cit riter = ivec.end();
    cit iter = ivec.begin();
    if (ivec.size() > 1)
    {
        --riter;
        for (; riter != iter && iter < riter; ++iter, --riter)
        {
            cout << *iter + *riter << endl;
        }
        
        if ( iter == riter)
        {
            cout << "We have an odd number: " << *iter << endl;
        }
    }
    else if(ivec.size() == 1)
    {
        cout << "We have an odd number: " << *iter << endl;
    }
    

}