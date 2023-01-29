#include <iostream>
using namespace std;

int main()
{   
    int length;
    cin >> length;

    int *arr = new int[length]();
    arr[0] =1;
    arr[1] =2;

    delete[] arr;
    
    for (int i =0; i<length; ++i)
    {
        cout << (uintptr_t)&arr[i] << endl;
        cout << arr[i] << endl;
    }

    return 0;
}