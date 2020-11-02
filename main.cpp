#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* args[])
{

    cout << argc << endl;
    if(argc > 0)
    {
        int inputNum = atoi(args[1]);
        cout << inputNum * 5;
        return 0;
    }

    cout << "No args given";
    return -1;
}