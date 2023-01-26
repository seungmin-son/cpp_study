#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    tryAgain: //goto문은 잘 사용하진 않음
        cin >> x;

        if (x < 0.0)
            goto tryAgain;

        cout << sqrt(x) << endl;


    return 0;
}