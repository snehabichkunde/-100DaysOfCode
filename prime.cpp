// to check weather the given number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=2; i<n; i++)
    {
        if(n%i==0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}