#include <iostream>

using namespace std;


enum Color //대문자로 쓰는게 암묵적인 룰
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
    COLOR_SKYBLUE,

};

enum Feeling
{
    HAPPY,
    JOY,
    TIRED,
    BLUE

};

int main()
{
    Color paint =  COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color appe{COLOR_GREEN};

    return 0;
}