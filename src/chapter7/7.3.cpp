#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
typedef int* pint;


void cal (const double degree, double &sin_out,double &cos_out)
{
    static const double pi = 3.141592;

    double radian = degree * pi / 180.0;
    sin_out = sin(radian);
    cos_out = cos(radian);

}

void foo (int *&ptr)
{
    cout << ptr << " "<< &ptr  << endl;

}

void printElement (vector<int>& arr)
{
    cout << &arr << endl;
}

int main()
{   
    double sin(0.0);
    double cos(0.0);

    cal(30.0,sin,cos);

    cout << sin << " " << cos << endl;

    int x = 5;
    int *ptr = &x;
    foo(ptr);
    /////////////////////////////////////////////////

    vector<int> arr{1,2,3,4,5};
    printElement(arr);
    return 0;
}