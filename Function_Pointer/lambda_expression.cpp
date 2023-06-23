#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 3, -1, 10, 4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, [](int a, int b)
         { return abs(a) < abs(b); });
    /*
    we can also creat the varible of lambda expression and use it in function calling
    auto myCam = [](int a, int b){return abs(a)<abs(b);};
    sort (arr, arr+n, myCam);
    */
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}