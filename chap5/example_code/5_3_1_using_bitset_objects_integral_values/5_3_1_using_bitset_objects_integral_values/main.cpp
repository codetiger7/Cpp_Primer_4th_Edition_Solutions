
#include <bitset>
#include <iostream>

using namespace std;

void printBits(std::bitset<30> bset, unsigned long iset)
{
    cout << "bitset: " << bset << endl;
    cout << "intSet: " << std::bitset<30>(iset) << endl;
    cout << endl;
}

int main()
{
    // quiz representation by bitset or integral values
    std::bitset<30> bitsetQuiz1;
    unsigned long intQuiz1{0};
    
    // set position 27
    bitsetQuiz1.set(27);
    intQuiz1 |=  1UL << 27;
    
    printBits(bitsetQuiz1, intQuiz1);
    
    bool ss = intQuiz1 & (1UL << 27);
    cout << "status int 27: " << ss << endl;

    
    // reset position 27
    bitsetQuiz1.reset(27);
    intQuiz1 &= ~(1UL << 27);
    
    printBits(bitsetQuiz1, intQuiz1);

    
    bool status;
    status = bitsetQuiz1[27];
    cout << "status bitset 27: " << status << endl;
    status = intQuiz1 & (1UL << 27);
    cout << "status int 27: " << status << endl;
    
    
    
    
    
    return 0;
}
