// Mtrix multiplication
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int> > matA(n, vector<int> (n,0));
    vector<vector<int> > matB(n, vector<int> (n,0));
    vector<vector<int> > res(n, vector<int> (n,0));
    
    // Matrix A
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> matA[i][j];
    }

    // Matrix B
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> matB[i][j];
    }

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            res[i][j] = matA[i][j]*matB[j][i];
        }
    }

    cout << "\nMultiplication of matrix A and matrix B: \n\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << res[i][j] <<" ";
        cout << endl;
    }
}