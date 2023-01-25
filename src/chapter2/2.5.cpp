#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;


int main()
{
    float f(3.141592f);
    double d(3.141592);
    long double ld(3.141592);

    cout << numeric_limits<float>::max() <<endl;
    cout << numeric_limits<double>::max() <<endl;
    cout << numeric_limits<long double>::max() <<endl;
    ///////////////////////////////////////////////////
    cout <<" " << endl;
    cout << 3.14 << endl;
    cout << 31.4e-1 << endl;
    cout << 31.4e-2 << endl;
    cout << 31.4e1 << endl;
    cout << 31.4e2 << endl;
    ////////////////////////////////////////////////////
    cout <<" " << endl;
    cout << 1.0 / 3.0 << endl;
    cout << std::setprecision(16) << endl; // 설정을 바꿔줌
    cout << 1.0 / 3.0 << endl;
    ////////////////////////////////////////////////////

    double zero = 0.0;
    double p = 5.0 / zero;
    double n = -5.0 / zero;
    double z = zero / zero;

    cout << p <<endl;
    cout << n <<endl;
    cout << z <<endl;
    cout << std::isnan(z) <<endl;
    cout << std::isinf(z) <<endl;
    
    return 0;
}