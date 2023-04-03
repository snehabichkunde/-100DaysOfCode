#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    cout << &x << endl;    // address of x
    cout << *(&x) << endl; // value at the address i.e. 10
    return 0;
}