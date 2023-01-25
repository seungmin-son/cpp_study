#include <iostream>

using namespace std;

bool isequal(int a, int b)
{
    bool result = (a == b);
    return result;
}


int main()
{
    bool b1 = true;
    bool b2 = false;

    cout << (true && false) << endl;
    cout << (true || false) << endl;
    cout << isequal(0,3) << endl;

    if (true)
        cout << "hello world" << endl;
    else
        cout << "good bye" << endl;


    bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << b << endl;
    
    return 0;
}