// 1 1 2 3 5 8 13 21 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // no. of terms wanna print
    int a = 1, b = 1;
    int c;
    cout << a << " " << b << " ";
    for(int i=1; i<(n-1); i++)
    {
        c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << "\n";
    return 0;

}