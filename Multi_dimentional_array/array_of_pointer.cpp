// using array of pointer to pass array to function 
#include<iostream>
using namespace std;
void print (int *arr[], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int *arr[m];
    for(int i=0; i<m; i++)
    {
        arr[i]= new int [n];
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // 2 d array is created 
    print (arr, m,n);
    return 0;
}