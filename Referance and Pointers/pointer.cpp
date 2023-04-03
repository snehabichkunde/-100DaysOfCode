#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    cout << *ptr << "\n";   //10
    x +=30;
    cout << *ptr << "\n";   // 40
    *ptr = *ptr +30;
    cout << x << "\n";     // 70
    return 0;
}