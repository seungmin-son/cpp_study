#include <iostream>
using namespace std;

int main()
{
    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;
    bool r2 = (v1|| v2) && v3; // and operator가 우선순위가 더 높음

    cout << r1 << endl;
    cout << r2 << endl;

    return 0;
}