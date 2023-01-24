#include <iostream>

using namespace std;

int main()
{
    int x =5;
    int y = --x;

    int z = x--;

    cout << y<<endl;
    cout << z <<endl;

    int a = 6, b = 6;

    cout << a << " " << b <<endl;
    cout << ++a << " " << b-- <<endl; //증감연산자 위치가 앞이냐 뒤에 따라 달라지는데 해석 중요함
    cout << a << " " << b <<endl;
    cout << a++ << " " << b-- <<endl; 
    cout << a << " " << b <<endl; 


    return 0;
}