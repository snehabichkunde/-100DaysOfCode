#include<iostream>
using namespace std;
int main ()
{
    int x = 10;
    int *p;
    p = &x;
    cout << x << "\n";
    cout << *p << "\n";    // the value at the address of x
    cout << p << "\n";     // the address stoared at p 
    return 0;
}