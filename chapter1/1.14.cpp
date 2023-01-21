#include <iostream>
#include <algorithm>
#define MY_NUMBER 123
#define APPLE 
using namespace std;

int main()
{
    cout << MY_NUMBER << endl;

    #ifdef APPLE
    cout << "APPLE" << endl;
    #endif

    #ifdef ORANGE
    cout << "ORANGE" << endl;
    #endif
    return 0;
}