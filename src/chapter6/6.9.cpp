#include <iostream>
using namespace std;

int main()
{
    int value = 7;
    int *ptr = &value;

    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr + 1) << endl;
    cout << uintptr_t(ptr + 2) << endl;
    cout << uintptr_t(ptr + 3) << endl;

    int arr[] = {1,3,5,7,9};
    cout << arr[0] << " " << (uintptr_t)&arr[0] << endl;
    cout << arr[1] << " " << (uintptr_t)&arr[1] << endl;
    cout << arr[2] << " " << (uintptr_t)&arr[2] << endl;
    ////////////////////////////////////////////////////////////////////


    char name[] = "seung min";
    const int n_name = sizeof(name) / sizeof(char);

    for (int i = 0; i< n_name; ++i)
    {
        cout << *(name + i);
    }

    return 0;
}