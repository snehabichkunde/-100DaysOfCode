// to find the size of structure 
#include<iostream>
using namespace std;
struct gfg
{
    int z;
    float d;
    char s[20];
} g;
int main()
{
    cout << sizeof(g) << endl;  // 28
    return 0;
}