#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height;
    float weight;
    int age;
    string name = "bae";

    void print()
    {
        cout << height << " " << weight << " "<< age << " "<< name;
        cout << endl;
    }

};

struct  Family
{
    Person me;
    Person mom;
    Person dad;
};

struct Employee // 14 bytes
{
    short id; //2bytes
    int age; // 4bytes
    double wage; // 8 bytes

};


int main()
{
    Person me{2.0, 100.0,24, "손승민"};
    me.print();

    Person friend1;
    friend1.print(); // bae라는 name 기본값 출력
    cout <<me.weight << endl;

    Employee emp1;
    cout << sizeof (Employee) << endl; //16 bytes가 쓰임 

    return 0;
}