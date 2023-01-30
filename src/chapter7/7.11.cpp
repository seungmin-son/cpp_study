#include <iostream>
#include <vector>

using namespace std;
void print1(const vector<int> &stack)
{
    for(auto &e : stack)
        cout << e << " ";
    cout << endl;
}

int main()
{
    vector<int> v1{1,2,3};
    
    for (auto &e : v1)
        cout << e << " ";

    cout << endl;

    cout << v1.size() << endl;

    v1.resize(10);

    cout << v1.size() << " " << v1.capacity() << endl;
    ////////////////////////////////////////////////////////////////////////

    vector<int> stack;
    stack.push_back(3);
    print1(stack);

    stack.push_back(5);
    print1(stack);

    stack.push_back(7);
    print1(stack);

    stack.pop_back();
    print1(stack);

    stack.pop_back();
    print1(stack);

    stack.pop_back();
    print1(stack);



    return 0;
}