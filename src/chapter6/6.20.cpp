#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{   

    array <int,5> my_arr = {14,2,13,42,35};
    cout << my_arr[0] << endl;


    cout << my_arr.size() << endl;

    sort(my_arr.begin(), my_arr.end());

    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;
    
    return 0;
}