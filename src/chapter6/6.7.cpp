#include <iostream>
#include <typeinfo>
using namespace std;

struct  some
{
    int a,b,c,d; // 4x 4 = 16 bytes
};

int main()
{
    int x = 5;
    double d = 1.0;

    cout << x << endl;
    cout << &x << endl;

    cout << *(&x) << endl;

    int * ptr_x;
    double * ptr_d = &d;
    ptr_x = &x;

    cout << ptr_x << endl;
    cout << *ptr_x << endl;
    cout << ptr_d << endl;
    cout << *ptr_d << endl;

    cout << typeid(ptr_x).name() << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x)<< " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d)<< " " << sizeof(ptr_d) << endl;

    some ss;
    some *ptr_s;

    cout << sizeof(some) << endl;
    cout << sizeof(ptr_s) << endl; //주소도 변수이기 때문에 사이즈가 고정되어있다.

    return 0;
}