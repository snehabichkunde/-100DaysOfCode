// creating array by using vestors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m=3, n=2;
    vector <int> arr[m];
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
           arr[i].push_back(10);
    for(int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
           cout << arr[i][j] << " ";
        cout << endl; 
    }
    return 0;
}

// not as cache friendly as simple 2d 
// individual rows are of dynamically sizes
// Easy to pass to function