#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{10, 3, 4, 62, 22, 2, -88};
    int res = count_if(v.begin(), v.end(), [](int x)
                       { return x >= 10; });
    // will count no. element which are greater than or equal to 10
    cout << res << endl; // 3
}