#include <iostream>

int main(void)
{
    int x=1;
    x = x+2;
    std::cout << x << std::endl;

    int y = x;
    std::cout << y << std::endl;

    std::cout << x+ y << std::endl;
    std::cout << x << std::endl;

    int z;
    std::cout << z << std::endl;


    return 0; //return statement 
}