#include <iostream>
using namespace std;

int addTwoNumber(int num_a, int num_b)
{
    int sum = num_a + num_b;
    
    return sum;
}

void printHelloWorld()
{
    cout << "HEllo world" << endl;
}

int main()
{
    cout << addTwoNumber(1,2) << endl;
    cout << addTwoNumber(3,4) << endl;
    cout << addTwoNumber(8,13) << endl;
    printHelloWorld();
    return 0;
}