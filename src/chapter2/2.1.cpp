#include <iostream>

using namespace std;

int main()
{
    int j = 3;
    int i = -1;
    int k = 123;
    char a = 'H';
    bool bvalue = false;

    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;

    cout << (uintptr_t)static_cast<void*>(&a) << endl;
    cout << (uintptr_t)static_cast<void*>(&i) << endl;

    cout << (bvalue ? 1:0) << endl;

    cout << aValue << endl;
    cout << sizeof(aValue) << endl;
    cout << aValue2 << endl;
    cout << sizeof(aValue2) << endl;

    ////////////////////////////////////////////////////////////////////
    cout << "\n" <<endl;

    int a2(123); //direct initialization
    int b{123}; // uniform initialization 얘가 조금더 엄격하게 작동함

    cout << a2 << endl;
    cout << b << endl;
    return 0;
}