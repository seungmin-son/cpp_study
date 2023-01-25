#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    const char my_str[] = "Hello, World";
    const string my_hello = "Hello, World";

    cout << my_hello << endl;

    string my_ID = "1234";
    cout << my_ID << endl;

    /////////////////////////////////////////////
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //엔터키입력이 될떄까지 입력을 받는다.
    cout << " " << endl;
    cout << "이름을 입력하시오: ";
    string name;
    //cin >> name;
    std::getline(std::cin,name);

    cout << "나이를 입력하시오: ";
    string age;
    //cin >> age;
    std::getline(std::cin,age);

    cout << "숫자를 입력하시오: ";
    int num;
    cin >> num;

    cout << name << " " << age << " " << num << endl;
    /////////////////////////////////////////////////////////////////////////
    cout << " " << endl;
    string a("hello");
    string b("world");
    string hw = a+b ;

    hw += " hihihi";

    cout << hw <<endl;
    cout << hw.length() << endl;
    return 0;
}