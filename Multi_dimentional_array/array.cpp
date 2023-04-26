// varible sized array
#include<iostream>
using namespace std;
int main ()
{
    int n, m;
    cin >> m >> n;
    int arr[m][n];
    for (int i=0; i<m; i++)
    {
        
for(int j=0; j<n; j++)
        {
            arr[i][j] = i*10;
        }
    }
    for (int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
          cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
