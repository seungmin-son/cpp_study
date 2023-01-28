#include <iostream>
using namespace std;

void printarr(int * arr)
{
    cout << sizeof(arr) << endl;    
    cout << *arr << endl;    

}

int main()
{
    int arr[5] = {9,7,5,3,1}; //정적할당
    cout << * arr << endl;

    int *ptr = arr;
    cout << ptr << endl;
    cout << *ptr << endl;

    cout << sizeof (arr) << endl; //20
    cout << sizeof(ptr) << endl; // 8

    printarr(arr);
    return 0;
}