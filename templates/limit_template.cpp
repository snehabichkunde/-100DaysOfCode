// using limit in template 
#include<iostream>
using namespace std;
template <typename T, int limit>
T my_max(T arr[], T n)
{
    if (n>limit)
    {
        cout << "invalid output" << endl;
        return 0;
    }
    

    T res = arr[0];
    for (int i=1; i<n; i++){
        if(res< arr[i])
            res = arr[i];
    }
    return res;
}

int main()
{
    const int x =50;
    // int x =50 won't work as we have to make it const 
    int arr1[] = {1, 2, 3};
    float arr2[] = {1.1, 1.4, 1.3};
    cout << my_max<int, x> (arr1,3) << endl;
    cout << my_max<float, x> (arr2, 3) << endl;
    return 0;
}