#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20 ; 
    cout << (x<y) << "\n"   //1
         << (x>y) << "\n"   //0
         << (x==y) << "\n"  // 0
         << (x>=y) << "\n"  // 0
         << (x<=y) << "\n"  // 1
         << (x!=y) << "\n";  // 1
    return 0;
}