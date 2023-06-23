#include <iostream>
#include <vector>
#include <numeric> // Include the numeric header for the accumulate function
using namespace std;

int main()
{
    vector<int> v{10, 3, 6, 4, 22, 56};
    int res = accumulate(v.begin(), v.end(), 1);
    // 2+10+3+6+4+22+56 = 102
    cout << res << endl;     // 102

    return 0;
}
