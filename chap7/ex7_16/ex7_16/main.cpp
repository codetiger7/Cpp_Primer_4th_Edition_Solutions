
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    
    vector<char*> cVec;
    cVec.push_back(argv[0]);
    cVec.push_back(argv[1]);
    cVec.push_back(argv[2]);
    cVec.push_back(argv[3]);
    cVec.push_back(argv[4]);

    
    for (auto i = cVec.begin(); i != cVec.end(); ++i)
    {
        cout << *i << endl;
    }

//    char * cp = nullptr;

    //std::cout << "ptr = " << cp << std::endl;
    
    
    
    
    
    
    
    return 0;
}
