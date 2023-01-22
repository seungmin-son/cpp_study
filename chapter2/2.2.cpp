#include <iostream>
#include <cmath>
#include <limits>
using namespace std;


int main()
{
short s =1;
int  i=1;
long l =1;
long long ll =1; 


cout << sizeof(s) << endl;
cout << sizeof(i) << endl;
cout << sizeof(l) << endl;
cout << sizeof(ll) << endl;
///////////////////////////////////////

cout << std::pow(2,sizeof(short) * 8 - 1) - 1 << endl;
cout << std::numeric_limits<short>::max() <<endl;
cout << std::numeric_limits<short>::min() << endl;
cout << std::numeric_limits<short>::lowest() << endl;

return 0;
}