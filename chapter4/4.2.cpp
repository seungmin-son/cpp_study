#include <iostream>
#include "constants.h"
using namespace std;

int value = 123;

void add()
{
    static int a= 1; //debugging 할때 많이 사용
    ++a;
    cout << a <<endl;

}

extern void dosomething();

int main()
{
    cout << value <<endl;
    int value = 1;


    cout << ::value <<endl; // global 변수를 가져옴
    cout << value <<endl;
    cout << " " << endl;
    /////////////////////////////////////////////////////////////////////////////

    add();
    add();
    add();
    add();
    ////////////////////////////////////////////////////////////
    
    //dosomething();

    cout << Constants::pi << " " << &Constants::pi << endl;

    return 0;
}