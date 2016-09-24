//
//  main.cpp
//  ex3_1
//
//  Created by Brian Opedal on 5/8/16.
//  Copyright © 2016 cpp_primer_4th_edition. All rights reserved.
//

#include <iostream>

int main()
{
    // prep
    using std::cout;
    using std::cin;
    using std::endl;
    
    // setup
    cout << "Enter a base number: " << endl;
    int base;
    cin >> base;
    
    cout << "Enter an exponent: " << endl;
    int expo;
    cin >> expo;
    
    // calculate result
    int sum = 1;
    for (int cnt = 0; cnt != expo; ++cnt )
    {
        sum *= base;
    }
    
    
    // display result
    cout << "The result of " << base << " raised to the power of " << expo << endl;
    cout << "Result: " << sum << endl;

    
}
