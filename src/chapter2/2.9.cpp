#include <iostream>
#include "/home/son/catkin_ws/src/CPP_STUDY/src/header/2.9.h"

using namespace std;

void hi(const int a)
{
    cout << a << endl;

}



int main()
{
    constexpr double a = 9.8;
    hi(123);


    int num;
    cin >> num;

    const int special_number(num);

    double c = 2.0 * constants::pi;
    cout << c << endl;


    return 0;
}