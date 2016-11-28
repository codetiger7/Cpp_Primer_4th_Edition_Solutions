
#include <iostream>
#include <string>

using namespace std;

int pow(int value, int exponential);



int main()
{
    cout << " 27 == " << pow(3, 3) << endl;
    
    cout << " 1 == " << pow(2, 0) << endl;
    cout << " 1 == " << pow(0, 0) << endl;

    return 0;
}


int pow(int value, int exponential)
{
    int product = 1;
    
    for (int i = 0; i != exponential; ++i)
    {
        product *= value;
    }
    
    return product;
}
