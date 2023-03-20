#include<iostream>
using namespace std;
int main()
{
    int x = 33;
    cout << (x>>1) << endl;  // 16
    cout << (x>>2) << endl;  // 8
    int y = 4;
    int z = (x>>y);
    cout << z << endl;  // 2
    return 0;
}

// x   =>  0000...100001
// x>>1 => 0000...010000
// x>>2 => 0000...001000
// x>>4 => 0000...000010