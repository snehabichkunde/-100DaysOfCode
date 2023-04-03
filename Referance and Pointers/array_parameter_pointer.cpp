#include<iostream>
using namespace std;
void increment (int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i]++; 
    }
}
int main ()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    increment(arr, size);
    for (int i=0; i< size; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << "\n";
    return 0;
}