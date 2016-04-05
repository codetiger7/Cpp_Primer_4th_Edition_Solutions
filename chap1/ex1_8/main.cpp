// Exercise 1.8
#include <iostream>

using namespace std;

int main()
{
    std::cout << "/*";
    std::cout << "*/";

    // not working
//    std::cout << /* "*/" */;

    // fixed version
    std::cout << /* "*/" */";

    return 0;
}

