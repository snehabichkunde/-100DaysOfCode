// passing a simple 2 d array to a function
#include<iostream>
using namespace std;
const int R=3;
const int L=2;
void print(int arr[R][L])
{
    for(int i=0; i<R; i++)
    {
        for (int j=0; j<L; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main ()
{
    int arr[R][L] = {1,2,3,4,5,6};
    print(arr);
    return 0;
}
// but by this method we can only print the arr[3][2]