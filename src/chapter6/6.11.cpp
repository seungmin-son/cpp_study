#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 7;

    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr; //메모리 반납
    ptr = nullptr;

    if (ptr != nullptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    // memory leak

    // while(true)
    // {
    //     int *ptr = new int;
    //     cout << ptr << endl;

    // }


    return 0;
}