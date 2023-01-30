#include <iostream>
#include <array>
#include <functional>
using namespace std;

int fun()
{
    return 5;

}

int goo()
{
    return 10;
}

bool isEven(const int& element)
{
    if(element % 2 ==0) return true;
    else return false;

}

bool isOdd(const int& element)
{
    if(element % 2 !=0) return true;
    else return false;


}

void printnum(const array<int,10> &arr1, bool (*check_fcn)(const int&))
{

    for (auto element : arr1)
    {
        if (check_fcn(element) == true) cout << element;
    }
    cout << endl;


}
int main()
{   
    int (*fcnptr)() = fun;

    cout << fcnptr() << endl;

    fcnptr = goo;

    cout << fcnptr() << endl; // 함수도 포인터다.

    cout << fun() << endl;
    ////////////////////////////////////////////////////////////////////

    array<int, 10> arr1{0,1,2,3,4,5,6,7,8,9};

    for (auto element : arr1)
    {
        if (element % 2 ==0) cout << element;
    }

    cout << endl;

    //function<bool(const int&)> fcnptr = isEven;
    printnum(arr1,isEven);
    printnum(arr1,isOdd);

    
    return 0;
}