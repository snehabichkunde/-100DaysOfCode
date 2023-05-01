#include<iostream>
using namespace std;
template <typename T>
T my_max(T arr[], T n)
{
    T res = arr[0];
    for (int i=1; i<n; i++)
    {
        if(res< arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}
int main()
{
    int arr1[] = {4, 7, 9};
    float arr2[] = {12.3, 11.1, 10.3};

    cout << my_max<int>(arr1, 3) << endl;
    cout << my_max<float>(arr2, 3) << endl;
    return 0;
}