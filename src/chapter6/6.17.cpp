#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main()
{   
    int arr[] = {0,1,1,2,3,5,8,13,21,34,55,89};\

    for(int num : arr)
        cout << num <<" ";

    cout << endl;

    for (auto& num : arr)
        num *=10;
    cout << endl;

    for(int num : arr)
        cout << num <<" ";

    cout << endl;

    ///////////////////////////////////////////////////////////////

    int max_num = numeric_limits<int>::lowest();
    for (const auto &n : arr)
        max_num = max(max_num , n);

    cout << max_num << endl;
    
    return 0;
}