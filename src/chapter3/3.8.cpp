#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int a= 3;
    cout << std::bitset<4>(a) <<endl;

    unsigned int b= a << 1;
    cout << std::bitset<4>(b) <<endl;


    unsigned int c= 3;
    cout << std::bitset<8>(a) <<endl;
    cout << std::bitset<8>(a << 1) << " " << (a<<1) << endl;
    cout << std::bitset<8>(a << 2) << " " << (a<<2) << endl;
    cout << std::bitset<8>(a << 3) << " " << (a<<3) << endl;
    cout << std::bitset<8>(a << 4) << " " << (a<<4) << endl; //계산량이 많을때 사용
    cout << "" << endl;

    a = 1024;
    cout << std::bitset<16>(a >> 1) << " " << (a>>1) << endl;
    cout << std::bitset<16>(a >> 2) << " " << (a>>2) << endl;
    cout << std::bitset<16>(a >> 3) << " " << (a>>3) << endl;
    cout << std::bitset<16>(a >> 4) << " " << (a>>4) << endl; 
    cout << "" << endl;

    cout << std::bitset<16>(~a) << " " << (~a) << endl; // not gate
    cout << "" << endl;

    a = 0b1100;
    b = 0b0110;

    cout << a<< " "<< b << endl;
    cout << "" << endl;

    cout << std::bitset<4>(a&b) << endl; //and
    cout << std::bitset<4>(a|b) << endl; //or
    cout << std::bitset<4>(a^b) << endl; //xor

    return 0;
}