#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
void push() 
{
	int t;
	cin >> t;

	st.push(t);
	return;
}
int pop() 
{
	if (st.empty()) {
		return -1;
	}
	else {
		int top = st.top();
		st.pop();
		return top;
	}
}
int size() 
{
	return st.size();
}

int empty() 
{
	if (st.empty()) {
		return 1;
	}
	else {
		return 0;
	}
}

int top() 
{
	if (st.empty()) {
		return -1;
	}
	else {
		int top = st.top();
		return top;
	}
}

int main() 
{
	string opt[5] = {"push", "pop", "size", "empty", "top"};
	int num;
	cin >> num;

	string s1;
	while (num--) 
    {
		cin >> s1;

		for (int i = 0; i < 5; i++) 
        {
			if (s1 == opt[i]) 
            {
				if (i == 0) {
					push();
				}
				else if (i == 1) 
					cout << pop() << '\n';
				
				else if (i == 2) 
					cout << size() << '\n';
				
				else if (i == 3) 
					cout << empty() << '\n';
				
				else if (i == 4) 
					cout << top() << '\n';
				
				break;
			}
		}
	}
	return 0;
}