// to determine the size of expersions
#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    float b = 3.4;
    long c = 8;
    double d = 6.789;

    cout << sizeof(a+b)<< endl;    // 4
    cout << sizeof(b+c) << endl;   // 4
    cout << sizeof(d*a) << endl;   // 8
    cout << sizeof(c-a) << endl;   // 8
    return 0;
}