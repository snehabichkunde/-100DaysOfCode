// Sum of n natural numbers
// the formula for this is = n*(n+1)/2
#include<iostream>
using namespace std;
int main ()
{
    int n;
    // take input from the keyboard
    cin >> n;
    int sum = n* (n+1)/2;
    cout << sum << endl;
    return 0;
}