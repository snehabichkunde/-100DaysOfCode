// to find nesting size of oprator 
#include<iostream>
using namespace std;
int main ()
{
    int x;
    int y;
    cout << sizeof(x*sizeof(y)) << endl;  // 8
    return 0;
} 