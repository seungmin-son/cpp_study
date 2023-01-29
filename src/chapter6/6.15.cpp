#include <iostream>
using namespace std;

void dosomething(const int &x)
{
    cout << x << endl;
}

int main()
{   
    int a = 1;
    dosomething(a);
    dosomething(1);
    dosomething(a + 3);
    dosomething(3 * 4);


    return 0;
}