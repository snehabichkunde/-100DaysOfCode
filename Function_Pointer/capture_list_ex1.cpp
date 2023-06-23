#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x = 5, y = 10;
    auto lambda_exm = [=](int a) mutable
    {x+=a;
    y+=a; };
    cout << x << " " << y << endl; // 5 10
    return 0;
}