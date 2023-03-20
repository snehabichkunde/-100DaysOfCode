#include<iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 6;
    cout << (a|b) << endl;   //7
    return 0;
}

// a  => 000..0011
// b  => 000..0110
//a|b => 000..0111 = 7