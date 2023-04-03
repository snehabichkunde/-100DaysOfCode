#include<iostream>
using namespace std;
void increment (int * x)
{
    *x+=5;
}
int main ()
{
    int x = 5;
    cout << x << "\n";   // 5
    increment (&x);  // pass the memory address of x 
    cout << x << "\n";   // 10
    return 0;
}