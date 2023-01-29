#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{   
    vector<int> arr = {13,11,14,15,10};

    cout << arr.size() << endl;

    for (auto &itr : arr)
        cout << itr << " ";
    cout << endl;
    
    arr.resize(10);

    for (auto &itr : arr)
        cout << itr << " ";
    cout << endl;
    
    return 0;
}