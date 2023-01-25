#include <iostream>

using namespace std;

int main()
{
    int x = 3;
    int y = 10;
    int z = (++x, ++y);

    // ++x;
    // ++y;
    // int z = y;, comma operator 풀어서쓰면 다음과 같음 

    cout << z <<endl;


    int a = 1, b= 10;
    int c;

    c = (++a, a+ b);

    cout << c <<endl;
    
    return 0;
}