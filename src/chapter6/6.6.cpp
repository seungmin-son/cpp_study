#include <iostream>
#include <cstring>
using namespace std;


int main ()
{

    char source[] = "copy this!";
    char dest[50];

    strcpy(dest,source);

    cout << source << endl;
    cout << dest << endl;

    strcat(dest,source);
    cout << source << endl;
    cout << dest << endl;


    if(strcmp(source,dest) ==0)
    { 
        cout << "back" << endl;
    }
    
    return 0;
}