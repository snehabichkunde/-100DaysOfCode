#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 23;
    bool res = ((a==b) && b++);
    // As here 1st condition becames false, It won't check of the next condition 
    // just store the value false (0) in res
    cout << res << " " << b << endl;  // 0 23
    bool res2 = ((a<=b) || (b++));
    cout << res2 << " " << b << endl; // 1 23
    return 0;
}