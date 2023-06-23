#include <iostream>
#include <algorithm>
using namespace std;
bool Compute(int a, int b)
{
    return abs(a) < abs(b);
}
int main()
{
    int arr[] = {1, 6, 9, -4, 3, -10, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, Compute);
    cout << "Sorted array by absulute value: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
