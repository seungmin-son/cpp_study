#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int getvalue(int x)
{
    int value = x *2;

    return value;

}

int& get(array<int,100>& my_arr, int ix)
{

    return my_arr[ix];

}

tuple<int,double> gettuple()
{
    int a =10;
    double d =3.14;
    return make_tuple(a,d);


}
int main()
{   
    int value = getvalue(3);
    cout << value << endl;

    array<int, 100> my_arr;

    my_arr[30] = 10;

    get(my_arr,30) = 1024;

    cout << my_arr[30] << endl;

    tuple<int,double> my_tp = gettuple();
    cout << std::get<0>(my_tp) << endl;
    cout << std::get<1>(my_tp) << endl;

    return 0;
}