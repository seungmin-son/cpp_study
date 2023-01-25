#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bool state1 = false;
    bool state2 = false;
    bool state3 = false;
    bool state4 = false;

    unsigned char a = 0;
    cout << bitset<8>(a) << endl;

    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;


    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    cout << " " << endl;

    state1 |= opt0;
    cout << bitset<8>(state1) << endl;
    /////////////////////////////////////////////////////////////////////////////////// 
    cout << " " << endl;

    unsigned int pixel_color = 0xDAA520;
    cout << bitset<32>(pixel_color) << endl;

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF; //해당 색만을 출력하기 위한 mask

    cout << bitset<32>(red_mask) << endl;
    cout << bitset<32>(green_mask) << endl;
    cout << bitset<32>(blue_mask) << endl;
    cout << " " << endl;

    unsigned char blue = pixel_color & blue_mask;
    unsigned int green = (pixel_color & green_mask) >> 8;

    cout <<"blue " << bitset<8>(blue)<<" "<< int(blue) <<endl;
    cout <<"green " << bitset<8>(green)<<" "<< int(green) <<endl;
    

    return 0;
}