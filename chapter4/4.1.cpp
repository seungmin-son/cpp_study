#include <iostream>

using namespace std;

namespace work1
{
    int a = 1;
    void add()
    {
        a+= 1;
    }
}

namespace work2
{   
    int a = 1;
    void add()
    {
        a += 3;
    }
}

int main()
{
    work1::a;
    work1::add();
    cout << work1::a << endl;

    work2::a;
    work2::add();
    cout << work2::a << endl;

    return 0;
}