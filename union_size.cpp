// to determine the size of union 
#include<iostream>
using namespace std;
union gfg 
{
    int z; double d;
} g;
int main ()
{
    cout << sizeof(g) << endl;  // 8
    return 0;
}