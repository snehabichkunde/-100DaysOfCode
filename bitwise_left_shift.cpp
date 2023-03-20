#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    cout << (x<<1) << endl;  // 6
    cout << (x<<2) << endl;  // 12
    int y = 4;
    int z = (x<<y);
    cout << z << endl;  // 48
    return 0;
}

// x   =>  0000...000011
// x>>1 => 0000...000110
// x>>2 => 0000...001100
// x>>4 => 0000...110000