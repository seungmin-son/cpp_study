#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr_size;
    cin >> arr_size;

    vector<int> arr(arr_size);

    
    for( int i = 0; i <arr_size; i++)
        cin >> arr[i];


    sort(arr.begin(),arr.end());

    for( int i = 0; i <arr_size; i++)
        cout << arr[i] << '\n';
    
    cout << endl;

    return 0;
}