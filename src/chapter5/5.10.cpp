#include <iostream>

using namespace std;

int main()
{   
    std::cin.ignore(32767,'\n');
    int x,y;
    cin >> x >> y;
    
    char op;
    cin >> op;

    if ( std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767,'\n');
        cout << "잘못 입력했다" << endl;
    }
    
    if (op == '+') cout << x + y << endl;
    else if (op == '-') cout << x - y << endl;

    
    return 0;
}