
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    {
        // bitwise NOT
        unsigned char bits = 0227;
        cout << std::bitset<8>(bits) << endl;
        bits = ~bits;
        cout << std::bitset<8>(bits) << endl;
    }
    
    {
        cout << "\nbitwise shift operators:"<< endl;
        // bitwise shift operators
        unsigned char bits = 0233;
        cout << std::bitset<8>(bits) << endl;
        // left shift
        cout << std::bitset<8>(bits << 1) << endl;
        cout << std::bitset<8>(bits << 2) << endl;
        cout << std::bitset<8>(bits >> 3) << endl;
    }
    
    {
        // usigned and operation
        cout << "\nbitwise and operation:"<< endl;
        const unsigned char b1 = 0145;
        cout << std::bitset<8>(b1) << endl;
        const unsigned char b2 = 0257;
        cout << std::bitset<8>(b2) << endl;
        
        unsigned char results = b1 & b2;
        cout << std::bitset<8>(results) << endl;
        
        results = b1 ^ b2;
        cout << std::bitset<8>(results) << endl;
        
        results = b1 | b2;
        cout << std::bitset<8>(results);
        
        cout << endl;
        

    }

    
    
    return 0;
}
