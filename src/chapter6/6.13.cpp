#include <iostream>
using namespace std;

int main()
{   
    int value = 5;
    const int *ptr = &value; // 주소안에 들어있는 값을 바꾸지 않겠다.
    int *const ptr2 = &value; //주소값을 바꾸지 않겠다.
    const int *const ptr3 = &value; //둘다 바꾸지 않겠다.

    cout <<ptr << " "<< *ptr << endl;
    cout <<ptr2 << " "<< *ptr2 << endl;
    cout <<ptr3 << " "<< *ptr3 << endl;

    return 0;
}