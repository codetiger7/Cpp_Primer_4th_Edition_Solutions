#include <iostream>
#include <stdlib.h>     /* atof */


using namespace std;

int main(int argc, char **argv)
{    
    double val1 = std::atof(argv[1]);
    double val2 = std::atof(argv[2]);
    
    std::cout << "sum is : " << val1 + val2 << std::endl;
}
