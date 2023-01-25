#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int r = 1 + 2 + 3*4; //15 ㅎㅎ;
    
    cout << r <<endl;
    
    int a(1);
    int b(2);
    int c(3);
    int d(4);

    a= b =c;
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;

    double t(14);
    double w(3);
    t /= --w + 5;
    cout << t <<endl;

    t /= w-- + 5;
    cout << t <<endl;


    bool result = (a||b) && (c||d);

    cout << (bool)result <<endl;

    return 0;
}