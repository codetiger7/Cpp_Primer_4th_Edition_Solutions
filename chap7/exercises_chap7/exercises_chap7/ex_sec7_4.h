#ifndef ex_sec7_4_h
#define ex_sec7_4_h

#include <vector>


using namespace std;


namespace ex_sec7_4
{
    
    // a)
    struct Matrix
    {
        
    };
    bool compare(Matrix & a, Matrix & b);
    
    
    // b)
    vector<int>::iterator change_val(int val, vector<int>::iterator changeValue);
    
    
    
    
    // exercise 7.23
    
    double calc(double) { return 0.0; };
    int count(const string&, char){ return 0; }
    int sum(vector<int>::iterator, vector<int>::iterator, int);
    vector<int> vec(10);
    
}

#endif /* ex_sec7_4_h */
