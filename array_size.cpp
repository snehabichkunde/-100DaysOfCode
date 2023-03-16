// to find the size of an array
#include<iostream>
using namespace std;
int main ()
{
    int x[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(x) / sizeof(x[0]);   // 36/4 = 4
    cout << len << endl;
    return 0; 
}