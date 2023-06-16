#include <iostream>
using namespace std;
class arraySizeZero
{
};
class arraySizeNegative
{
};

int Sum(int arr[], int n)
{
    int sum;
    if (n == 0)
    {
        throw arraySizeZero();
    }
    if (n < 0)
    {
        throw arraySizeNegative();
    }
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    // float ava = sum/n;
    // return ava;

    return sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    try
    {
        int res = Sum(arr, n);
        cout << res << endl;
    }
    catch (arraySizeZero &e1)
    {
        cout << "Array size is zero\n";
    }
    catch (arraySizeNegative &e2)
    {
        cout << "Array size is negative\n";
    }
    return 0;
}