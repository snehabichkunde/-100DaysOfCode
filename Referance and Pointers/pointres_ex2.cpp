#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = arr;
    *ptr++;   // *ptr++ => *(ptr++) => *(arr+1) => 2
    cout << arr[0] << " "<< arr[1] << " " << *ptr << "\n";
    // 1 2 2
    return 0;
}