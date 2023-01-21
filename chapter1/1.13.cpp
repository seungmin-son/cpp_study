#include <iostream>

namespace Myspace1
{
    int add(int a, int b)
    {
        return a+ b;
    }
}

int add(int a, int b)
{
    return a* b;
}

using namespace std;

int main()
{
    cout << Myspace1::add(3,4) << endl;
    cout << add(3,4) <<endl;

    return 0;
}