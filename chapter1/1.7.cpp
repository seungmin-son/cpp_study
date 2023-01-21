#include <iostream>
using namespace std;

void doSomething(int x)
{
    x = 123;
    cout << x << endl; //5

}

int main()
{
    int x =0;
    cout << x <<" "<< &x<< endl; //1

    {
        int x=1;
        cout << x <<" "<< &x<< endl; //2
                
    }

    {
        int x=2;
        cout << x <<" "<< &x<< endl; //3
    }


   cout << x <<" "<< &x<< endl; //4
   doSomething(x);
   cout << x <<" "<< &x<< endl; //6

    return 0;
}