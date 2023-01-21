#include <iostream>

int main(void)
{
    int x = 2;
    x = 5;
    int y = x+3;

    std::cout << y << std::endl;
    std::cout << &y << std::endl; //이 변수가 저장된 주소가 나옴


    return 0; //return statement 
}