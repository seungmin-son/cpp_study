#include <iostream>
using namespace std;

struct some
{
    int v1;
    float v2;

};

struct other
{
    some st;
};

int main()
{   
    int value = 5;
    
    int *ptr = nullptr;
    ptr = &value;

    int &ref = value;
    cout << ref << endl;

    ref = 10;

    cout << value << " " << ref << endl;

    cout << &value << endl;
    cout << &ref << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    other ot;
    ot.st.v1 = 1.0;
    int &v1 = ot.st.v1;
    v1 = 1;

    return 0;
}