//sum of arithematic progression
#include<iostream>
using namespace std;
void ap_sum(int, int, int);
int main()
{ 
    int t;
    cin >> t;
    while(t--)
    {
        int a, d, n;
        // give 1st term, comman differace, and no. of terms in the series
        cin >> a >> d >> n;
        ap_sum (a, d, n);
    }
    return 0;
}
void ap_sum(int a, int d, int n)
{
    int ans = a + (n-1)*d;
    cout << ans << endl;
}