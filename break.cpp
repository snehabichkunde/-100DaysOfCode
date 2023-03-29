// to print smallest divisor
// break keyword
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for (int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            cout << "Smallest Divisor of " << n << " is " << i << endl;
            break;
        }
    }
    return 0;
}