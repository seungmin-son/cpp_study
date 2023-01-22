#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int n)
{
    string s = to_string(n); 
    reverse(s.begin(), s.end());
    
    return atoi(s.c_str());
}

int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    num1= rev(num1);
    num2 =rev(num2);

    cout << (num1 > num2 ? num1:num2) << endl;
    return 0;
}