#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x = 5, y = 10;
    auto lambda_exm = [&](int a)
    {x+=a;
    y+=a; };
    cout << x << " " << y << endl; // 25 30
    return 0;
}