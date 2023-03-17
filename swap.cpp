// Swapping two varibles using 3rd varible
#include<iostream>
using namespace std;
int main()
{
    int a = 6;
    int b = 7;

    cout << "Before swapping : a = " << a << " " << "b = " << b << endl;

    // swapping

    int t = b;
    b = a;
    a = t;

    cout << "After swapping : a = " << a << " " << "b = " << b << endl;
    return 0;
}