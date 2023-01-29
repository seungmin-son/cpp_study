#include <iostream>
using namespace std;

struct Person
{
    int age;
    double weight;

};

int main()
{   
    Person person;

    person.age = 5;
    person.weight = 30;
    cout << person.age << endl;

    Person &ref = person;
    ref.age = 15;
    cout << person.age << endl;

    Person *ptr = &person;
    ptr ->age = 30;
    //(*ptr).age = 20;
    cout << person.age << endl;

    Person &ref2 = *ptr;
    ref2.age = 45;

    cout << &person << endl;
    cout << &ref2 << endl;
    cout << person.age << endl;


    return 0;
}