#include<iostream>
using namespace std;
int main()
{
    int arr[] = {11, 12, 13};
    int *p1 = arr;
    int (*p2)[3] = &arr;
    cout << *p1 << "\n";   // 11
    cout << **p2 << "\n";   // 11
    return 0;
}