#include<iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 6;
    cout << (a&b) << endl;  // 2
    return 0;
}

// a   =>  0000....0011
// b   =>  0000....0110
// a&b =>  0000....0010 = 2