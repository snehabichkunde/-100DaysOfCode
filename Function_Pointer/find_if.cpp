#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{10, 3, 6, 4, 22, 56};
    auto it = find_if(v.begin(), v.end(), [](int x)
                      { return x > 10; });
    // will return the 1st number that is greater than 10
    cout << *it << endl;
    return 0;
}