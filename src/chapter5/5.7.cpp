#include <iostream>

using namespace std;
int pow(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
        result *= base;

    return result;
}


int main()
{
    for(int count =0; count < 10; ++count)
    {
        cout << count << endl;
    }
    cout << " "<< endl;
    cout << pow(2,4) <<  endl;
    ////////////////////////////////////////////////////////////////

    cout << " "<< endl;
    int i =0; int j =0; 
    for (; i<10;  ++i, --j)
        cout << i<< " " << j << endl;

    return 0;
}