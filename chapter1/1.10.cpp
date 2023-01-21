#include <iostream>

using namespace std;

int add(int a, int b); //add함수가 미리 나올것을 알려줌, forward declaration


int main()
{
    cout << add(1,2) << endl;

}

int add(int a, int b)
{
    return a + b;

}