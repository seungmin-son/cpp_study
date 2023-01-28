#include <iostream>
#include <cstddef>
using namespace std;

void check(double *ptr)
{
    cout << &ptr << endl;
  if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "NUll ptr" << endl;
        
    }

}

int main()
{
    double *ptr = nullptr; //c++ style 

    check(ptr);
    check(nullptr);

    double d= 123.4;
    ptr = &d;

    check(ptr);
    
    std::nullptr_t nptr;

    cout << &ptr << endl;

    return 0;
}